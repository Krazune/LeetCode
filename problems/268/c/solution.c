// 268. Missing Number
int missingNumber(int* nums, int numsSize)
{
	int s = numsSize * (numsSize + 1) / 2;
	
	for (int i = 0; i < numsSize; i++) s -= nums[i];
	
	return s;
}