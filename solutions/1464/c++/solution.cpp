// 1464. Maximum Product of Two Elements in an Array
#include <vector>

using namespace std;

class Solution
{
	public:
	int maxProduct(vector<int>& nums)
	{
		int highest = 0;
		int secondHighest = 0;

		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] > highest)
			{
				secondHighest = highest;
				highest = nums[i];
			}
			else if (nums[i] > secondHighest)
			{
				secondHighest = nums[i];
			}
		}

		return (highest - 1) * (secondHighest - 1);
	}
};