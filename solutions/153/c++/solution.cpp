// 153. Find Minimum in Rotated Sorted Array
#include <vector>

using namespace std;

class Solution
{
	public:
	int findMin(vector<int>& nums)
	{
		int left = 0;
		int right = nums.size() - 1;

		while (left != right)
		{
			int mid = left + (right - left) / 2;
			int leftValue = nums[left];

			if (nums[mid] >= leftValue)
			{
				if (leftValue > nums[right])
				{
					left = mid + 1;
				}
				else
				{
					return leftValue;
				}
			}
			else
			{
				right = mid;
			}
		}

		return nums[left];
	}
};