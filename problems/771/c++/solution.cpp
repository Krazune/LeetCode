// 771. Jewels and Stones
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	int numJewelsInStones(string jewels, string stones)
	{
		unordered_set<char> existingJewels(jewels.begin(), jewels.end());
		int count = 0;

		for (int index = 0; index < stones.size(); index++)
		{
			if (existingJewels.find(stones[index]) != existingJewels.end())
			{
				count++;
			}
		}

		return count;
	}
};