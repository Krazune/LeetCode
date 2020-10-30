// 1592. Rearrange Spaces Between Words
#include <string>
#include <vector>

using namespace std;

class Solution
{
	public:
	string reorderSpaces(string text)
	{
		int spaceCount = 0;
		vector<string> words;
		bool onWord = false;

		for (int i = 0; i < text.size(); ++i)
		{
			if (text[i] == ' ')
			{
				++spaceCount;

				if (onWord)
				{
					onWord = false;
				}

				continue;
			}

			if (!onWord)
			{
				words.push_back(string(1, text[i]));

				onWord = true;

				continue;
			}

			words[words.size() - 1] += text[i];
		}

		string result;
		int spacesBetween = (words.size() == 1) ? 0 : spaceCount / (words.size() - 1);

		for (int i = 0; i < words.size(); ++i)
		{
			result += words[i];

			if (i == words.size() - 1)
			{
				break;
			}

			for (int j = 0; j < spacesBetween; ++j)
			{
				result += ' ';
			}
		}

		int spacesEnd = (words.size() == 1) ? spaceCount : spaceCount % (words.size() - 1);

		for (int i = 0; i < spacesEnd; ++i)
		{
			result += ' ';
		}

		return result;
	}
};