// 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
#include <string>

using namespace std;

class Solution
{
	public:
	int isPrefixOfWord(string sentence, string searchWord)
	{
		int currentWordPosition = 1;
		bool ignoreCurrentWord = false;

		for (int i = 0; i < sentence.size(); ++i)
		{
			if (sentence[i] == ' ')
			{
				++currentWordPosition;
				ignoreCurrentWord = false;

				continue;
			}

			if (ignoreCurrentWord)
			{
				continue;
			}

			for (int j = 0; j < searchWord.size() && i < sentence.size(); ++j, ++i)
			{
				if (sentence[i] != searchWord[j])
				{
					ignoreCurrentWord = true;
					--i;

					break;
				}

				if (j == searchWord.size() - 1)
				{
					return currentWordPosition;
				}
			}
		}

		return -1;
	}
};