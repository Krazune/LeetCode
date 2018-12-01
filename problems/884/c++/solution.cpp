// 884. Uncommon Words from Two Sentences
#include <vector>
#include <string>
#include <unordered_map>
#include <iterator>

using namespace std;

class Solution
{
	public:
	vector<string> uncommonFromSentences(string A, string B)
	{
		unordered_map<string, int> wordOccurrences;
		string currentWord;
		int aSize = A.size();

		for (int characterIndex = 0; characterIndex < aSize; ++characterIndex)
		{
			char currentCharacter = A[characterIndex];

			if (currentCharacter == ' ')
			{
				++wordOccurrences[currentWord];
				currentWord.clear();
			}
			else
			{
				currentWord += currentCharacter;
			}
		}

		if (!currentWord.empty())
		{
			++wordOccurrences[currentWord];
			currentWord.clear();
		}

		int bSize = B.size();

		for (int characterIndex = 0; characterIndex < bSize; ++characterIndex)
		{
			char currentCharacter = B[characterIndex];

			if (currentCharacter == ' ')
			{
				++wordOccurrences[currentWord];
				currentWord.clear();
			}
			else
			{
				currentWord += currentCharacter;
			}
		}

		if (!currentWord.empty())
		{
			++wordOccurrences[currentWord];
		}

		vector<string> uncommonWords;

		for (unordered_map<string, int>::iterator it = wordOccurrences.begin(); it != wordOccurrences.end(); advance(it, 1))
		{
			if (it->second == 1)
			{
				uncommonWords.push_back(it->first);
			}
		}

		return uncommonWords;
	}
};