// 268. Missing Number
int missingNumber(int* nums, int numsSize)
{
	int missing = numsSize * (numsSize + 1) / 2;

	for (int index = 0; index < numsSize; index++)
	{
		missing -= nums[index];
	}

	return missing;
}