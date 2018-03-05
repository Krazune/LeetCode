// 35. Search Insert Position
int searchInsert(int* nums, int numsSize, int target)
{
	int l = 0, r = numsSize - 1;

	while (l <= r)
	{
		int m = l + (r - l) / 2;

		if (nums[m] == target) return m;
		else if (nums[m] > target) r = m - 1;
		else l = m + 1;
	}

	return l;
}