// 1002. Find Common Characters
#include <vector>
#include <string>
#include <climits>

using namespace std;

class Solution
{
	public:
	vector<string> commonChars(vector<string>& A)
	{
		int commonOccurrences[26] = { INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX };
		int stringCount = A.size();

		for (int stringIndex = 0; stringIndex < stringCount; ++stringIndex)
		{
			string currentString = A[stringIndex];
			int stringSize = currentString.size();
			int currentOccurences[26] = { 0 };

			for (int letterIndex = 0; letterIndex < stringSize; ++letterIndex)
			{
				++currentOccurences[currentString[letterIndex] - 'a'];
			}

			for (int letterIndex = 0; letterIndex < 26; ++letterIndex)
			{
				commonOccurrences[letterIndex] = min(commonOccurrences[letterIndex], currentOccurences[letterIndex]);
			}
		}

		vector<string> common;

		for (int letterIndex = 0; letterIndex < 26; ++letterIndex)
		{
			for (int outputIndex = 0; outputIndex < commonOccurrences[letterIndex]; ++outputIndex)
			{
				common.push_back(string(1, letterIndex + 'a'));
			}
		}

		return common;
	}
};