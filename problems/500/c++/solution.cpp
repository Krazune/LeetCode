// 500. Keyboard Row
#include <vector>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

class Solution
{
	public:
	vector<string> findWords(vector<string>& words)
	{
		vector<string> validWords;
		vector<unordered_set<char>> keyboardRows(
		{
			{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
			{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'},
			{'z', 'x', 'c', 'v', 'b', 'n', 'm'}
		});

		for (string word : words)
		{
			if (word.empty())
			{
				continue;
			}

			int rowIndex = 0;
			bool isValid = true;

			for (int index = 0; index < keyboardRows.size(); index++)
			{
				if (keyboardRows[index].find(tolower(word[0])) != keyboardRows[index].end())
				{
					rowIndex = index;
					break;
				}
			}

			for (int index = 1; index < word.size(); index++)
			{
				if (keyboardRows[rowIndex].find(tolower(word[index])) == keyboardRows[index].end())
				{
					isValid = false;
					break;
				}
			}

			if (isValid)
			{
				validWords.push_back(word);
			}
		}

		return validWords;
	}
};