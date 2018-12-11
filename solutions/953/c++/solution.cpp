// 953. Verifying an Alien Dictionary
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	bool isAlienSorted(vector<string>& words, string order)
	{
		int wordCount = words.size();

		if (wordCount == 1)
		{
			return true;
		}

		unordered_map<char, int> alienOrder;

		for (int characterIndex = 0; characterIndex < 26; ++characterIndex)
		{
			char currentCharacter = order[characterIndex];

			alienOrder[currentCharacter] = characterIndex;
		}

		for (int wordIndex = 1; wordIndex < wordCount; ++wordIndex)
		{
			string currentWord = words[wordIndex];
			string previousWord = words[wordIndex - 1];
			int currentWordSize = currentWord.size();
			int previousWordSize = previousWord.size();

			for (int characterIndex = 0; characterIndex < previousWordSize; ++characterIndex)
			{
				if (characterIndex == currentWordSize)
				{
					return false;
				}

				char currentWordCharacter = currentWord[characterIndex];
				char previousWordCharacter = previousWord[characterIndex];
				int currentWordCharacterIndex = alienOrder[currentWord[characterIndex]];
				int previousWordCharacterIndex = alienOrder[previousWord[characterIndex]];

				if (currentWordCharacterIndex > previousWordCharacterIndex)
				{
					break;
				}
				else if (currentWordCharacterIndex < previousWordCharacterIndex)
				{
					return false;
				}
			}
		}

		return true;
	}
};