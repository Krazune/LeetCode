// 824. Goat Latin
#include <cctype>
#include <string>

using namespace std;

class Solution
{
	bool isVowel(char letter)
	{
		char lowercase = tolower(letter);

		return lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u';
	}

	public:
	string toGoatLatin(string S)
	{
		string translation;
		int stringSize = S.size();
		string currentWord;
		int wordCount = 0;

		for (int characterIndex = 0; characterIndex < stringSize; ++characterIndex)
		{
			char currentCharacter = S[characterIndex];

			if (currentCharacter == ' ' || characterIndex == stringSize - 1)
			{
				// WIP
				if (characterIndex == stringSize - 1)
				{
					currentWord += currentCharacter;
				}

				++wordCount;

				char firstLetter = currentWord[0];

				if (!isVowel(firstLetter))
				{
					currentWord = currentWord.substr(1, currentWord.size() - 1) + firstLetter;
				}

				currentWord += "ma";

				for (int a = 0; a < wordCount; ++a)
				{
					currentWord += 'a';
				}

				if (wordCount > 1)
				{
					translation += ' ';
				}

				translation += currentWord;
				currentWord.clear();
			}
			else
			{
				currentWord += currentCharacter;
			}
		}

		return translation;
	}
};