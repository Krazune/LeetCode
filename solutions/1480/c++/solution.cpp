// 1480. Running Sum of 1d Array
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> runningSum(vector<int>& nums)
	{
		vector<int> results(nums.size());
		int currentSum = 0;

		for (int i = 0; i < nums.size(); ++i)
		{
			currentSum += nums[i];

			results[i] = currentSum;
		}

		return results;
	}
};