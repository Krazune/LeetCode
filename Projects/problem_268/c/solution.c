// 268. Missing Number
int missingNumber(int* nums, int numsSize)
{
	int s = numsSize * (numsSize + 1) / 2, i = 0;
	
	for ( ; i < numsSize; i++) s -= nums[i];
	
	return s;
}