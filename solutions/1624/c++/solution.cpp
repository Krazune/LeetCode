// 1624. Largest Substring Between Two Equal Characters
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	int maxLengthBetweenEqualCharacters(string s)
	{
		unordered_map<char, int> firstOccurrences;
		int maxLength = -1;

		for (int i = 0; i < s.size(); ++i)
		{
			if (firstOccurrences.find(s[i]) == firstOccurrences.end())
			{
				firstOccurrences[s[i]] = i;

				continue;
			}

			int length = i - firstOccurrences[s[i]] - 1;

			if (length > maxLength)
			{
				maxLength = length;
			}
		}

		return maxLength;
	}
};