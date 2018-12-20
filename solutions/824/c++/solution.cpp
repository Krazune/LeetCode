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
		int lastIndex = stringSize - 1;

		for (int characterIndex = 0; characterIndex < stringSize; ++characterIndex)
		{
			char currentCharacter = S[characterIndex];

			if (currentCharacter != ' ')
			{
				currentWord += currentCharacter;

				if (characterIndex < lastIndex)
				{
					continue;
				}
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

		return translation;
	}
};