// 1758. Minimum Changes To Make Alternating Binary String
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	int minOperations(string s)
	{
		int alternatingChangesA = 0;
		int alternatingChangesB = 0;

		for (int i = 0; i < s.size(); ++i)
		{
			char expectedCharA = i % 2 + '0';

			if (s[i] != expectedCharA)
			{
				++alternatingChangesA;
			}
			else
			{
				++alternatingChangesB;
			}
		}

		return min(alternatingChangesA, alternatingChangesB);
	}
};