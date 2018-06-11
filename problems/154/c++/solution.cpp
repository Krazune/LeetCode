// 154. Find Minimum in Rotated Sorted Array II
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
			int midValue = nums[mid];
			int rightValue = nums[right];

			if (midValue > rightValue)
			{
				left = mid + 1;
			}
			else if (midValue < rightValue)
			{
				right = mid;
			}
			else
			{
				right--;
			}
		}

		return nums[left];
	}
};