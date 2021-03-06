// 1752. Check if Array Is Sorted and Rotated
#include <vector>

using namespace std;

class Solution
{
	public:
	bool check(vector<int>& nums)
	{
		bool unsortedFound = false;

		for (int i = 1; i < nums.size(); ++i)
		{
			if (nums[i] >= nums[i - 1])
			{
				continue;

			}

			if (unsortedFound)
			{
				return false;
			}

			unsortedFound = true;
		}

		if (unsortedFound)
		{
			return nums[nums.size() - 1] <= nums[0];
		}

		return true;
	}
};