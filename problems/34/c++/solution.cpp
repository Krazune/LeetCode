// 34. Search for a Range
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		vector<int> range(2, -1);
		int left = 0;
		int right = nums.size() - 1;

		while (left <= right)
		{
			int mid = left + (right - left) / 2;

			if (nums[mid] == target)
			{
				if (range[0] != -1 && range[0] < mid)
				{
					break;
				}

				range[0] = mid;
				right = mid - 1;
			}
			else if (nums[mid] < target)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}

		if (range[0] == -1)
		{
			return range;
		}

		left = 0;
		right = nums.size() - 1;

		while (left <= right)
		{
			int mid = left + (right - left) / 2;

			if (nums[mid] == target)
			{
				if (range[1] > mid)
				{
					break;
				}

				range[1] = mid;
				left = mid + 1;
			}
			else if (nums[mid] < target)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}

		return range;
	}
};