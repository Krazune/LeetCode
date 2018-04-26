// 747. Largest Number At Least Twice of Others
#include <limits.h>

int dominantIndex(int* nums, int numsSize)
{
	int h = INT_MIN, l = INT_MIN, m = -1;
	
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] > h)
		{
			l = h;
			h = nums[i];
			m = i;
		}
		else if (nums[i] > l) l = nums[i];
	}
	
	if (h >= 2 * l) return m;
	else return -1;
}