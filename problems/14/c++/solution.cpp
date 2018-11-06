// 14. Longest Common Prefix
#include <string>
#include <vector>

using namespace std;

class Solution
{
	public:
	string longestCommonPrefix(vector<string>& strs)
	{
		int wordCount = strs.size();

		if (wordCount == 0)
		{
			return "";
		}

		string prefix;
		int firstWordSize = strs[0].size();

		for (int characterIndex = 0; characterIndex < firstWordSize; ++characterIndex)
		{
			char currentCharacter = strs[0][characterIndex];

			for (int wordIndex = 0; wordIndex < wordCount; ++wordIndex)
			{
				if (characterIndex >= strs[wordIndex].size() || strs[wordIndex][characterIndex] != currentCharacter)
				{
					return prefix;
				}
			}

			prefix += currentCharacter;
		}

		return prefix;
	}
};