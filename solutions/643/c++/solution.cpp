// 643. Maximum Average Subarray I
#include <vector>

using namespace std;

class Solution
{
	public:
	double findMaxAverage(vector<int>& nums, int k)
	{
		int kSum = 0;

		for (int i = 0; i < k; ++i)
		{
			kSum += nums[i];
		}

		int maximumSum = kSum;

		for (int i = 1; i < nums.size() - k + 1; ++i)
		{
			kSum -= nums[i - 1];
			kSum += nums[i + k - 1];

			if (kSum > maximumSum)
			{
				maximumSum = kSum;
			}
		}

		return static_cast<double>(maximumSum) / static_cast<double>(k);
	}
};