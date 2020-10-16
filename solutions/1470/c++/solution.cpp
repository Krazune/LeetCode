// 1470. Shuffle the Array
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> shuffle(vector<int>& nums, int n)
	{
		vector<int> result(nums.size());

		for (int i = 0; i < n; ++i)
		{
			result[i * 2] = nums[i];
			result[i * 2 + 1] = nums[n + i];
		}

		return result;
	}
};