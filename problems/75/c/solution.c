// 75. Sort Colors
void sortColors(int* nums, int numsSize)
{
	int zeroIndex = 0;
	int twoIndex = numsSize - 1;

	for (int index = 0; index <= twoIndex; index++)
	{
		int currentValue = nums[index];

		if (currentValue == 0)
		{
			nums[index] = nums[zeroIndex];
			nums[zeroIndex] = 0;
			zeroIndex++;
		}
		else if (currentValue == 2)
		{
			nums[index] = nums[twoIndex];
			nums[twoIndex] = 2;
			index--;
			twoIndex--;
		}
	}
}