// 747. Largest Number At Least Twice of Others
#include <limits.h>

int dominantIndex(int* nums, int numsSize)
{
	int high = INT_MIN;
	int low = INT_MIN;
	int middle = -1;

	for (int index = 0; index < numsSize; index++)
	{
		if (nums[index] > high)
		{
			low = high;
			high = nums[index];
			middle = index;
		}
		else if (nums[index] > low)
		{
			low = nums[index];
		}
	}

	if (high >= 2 * low)
	{
		return middle;
	}
	else
	{
		return -1;
	}
}