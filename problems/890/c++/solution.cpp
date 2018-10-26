// 890. Find and Replace Pattern
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
	vector<char> getNormalPattern(string word)
	{
		vector<char> normalPattern;
		unordered_map<char, char> characterCodes;
		char currentCode = 'a';

		for (char character : word)
		{
			auto codeFound = characterCodes.find(character);

			if (codeFound != characterCodes.end())
			{
				normalPattern.push_back(codeFound->second);
			}
			else
			{
				normalPattern.push_back(currentCode);
				characterCodes[character] = currentCode;
				currentCode++;
			}
		}

		return normalPattern;
	}

	public:
	vector<string> findAndReplacePattern(vector<string>& words, string pattern)
	{
		vector<char> normalPattern = getNormalPattern(pattern);
		vector<string> matchingWords;

		for (string word : words)
		{
			if (word.size() != pattern.size())
			{
				continue;
			}

			vector<char> wordNormalPattern = getNormalPattern(word);

			if (normalPattern == wordNormalPattern)
			{
				matchingWords.push_back(word);
			}
		}

		return matchingWords;
	}
};