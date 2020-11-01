// 1512. Number of Good Pairs
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	int numIdenticalPairs(vector<int>& nums)
	{
		int goodPairCount = 0;
		unordered_map<int, int> numberCount;

		for (int i = 0; i < nums.size(); ++i)
		{
			if (numberCount.find(nums[i]) == numberCount.end())
			{
				numberCount[nums[i]] = 1;

				continue;
			}

			goodPairCount += numberCount[nums[i]];

			++numberCount[nums[i]];
		}

		return goodPairCount;
	}
};