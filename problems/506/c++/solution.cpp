// 506. Relative Ranks
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <functional>

using namespace std;

class Solution
{
	public:
	vector<string> findRelativeRanks(vector<int>& nums)
	{
		int scoreCount = nums.size();
		unordered_map<int, int> scoreIndexes;

		for (int index = 0; index < scoreCount; index++)
		{
			scoreIndexes[nums[index]] = index;
		}

		sort(nums.begin(), nums.end(), greater<int>());

		vector<string> ranks(scoreCount);

		for (int index = 0; index < scoreCount; index++)
		{
			int originalIndex = scoreIndexes[nums[index]];

			if (index == 0)
			{
				ranks[originalIndex] = "Gold Medal";
			}
			else if (index == 1)
			{
				ranks[originalIndex] = "Silver Medal";
			}
			else if (index == 2)
			{
				ranks[originalIndex] = "Bronze Medal";
			}
			else
			{
				ranks[originalIndex] = to_string(index + 1);
			}
		}

		return ranks;
	}
};