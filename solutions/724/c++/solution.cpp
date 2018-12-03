// 724. Find Pivot Index
#include <vector>

using namespace std;

class Solution
{
	public:
	int pivotIndex(vector<int>& nums)
	{
		int low = 0;
		int high = 0;

		for (int index = 0; index < nums.size(); index++)
		{
			high += nums[index];
		}

		for (int index = 0; index < nums.size(); index++)
		{
			high -= nums[index];

			if (high == low)
			{
				return index;
			}

			low += nums[index];
		}

		return -1;
	}
};