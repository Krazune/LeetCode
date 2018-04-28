// 26. Remove Duplicates from Sorted Array
int removeDuplicates(int* nums, int numsSize)
{
	if (numsSize  < 2)
	{
		return numsSize;
	}
	
	int offset = 0;
	
	for (int index = 1; index < numsSize; index++)
	{
		if (nums[index] == nums[index - 1])
		{
			offset++;
		}
		else
		{
			nums[index - offset] = nums[index];
		}
	}
	
	return numsSize - offset;
}