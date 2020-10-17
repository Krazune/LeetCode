// 1365. How Many Numbers Are Smaller Than the Current Number
#include <vector>
#include <unsorted_map>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums)
	{
		vector<int> sortedNums(nums);

		sort(sortedNums.begin(), sortedNums.end());

		unordered_map<int, int> valuePosition;

		for (int i = nums.size() - 1; i >= 0; --i)
		{
			valuePosition[sortedNums[i]] = i;
		}

		vector<int> result(nums.size());

		for (int i = 0; i < nums.size(); ++i)
		{
			result[i] = valuePosition[nums[i]];
		}

		return result;
	}
};