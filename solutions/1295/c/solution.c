// 1295. Find Numbers with Even Number of Digits
int findNumbers(int *nums, int numsSize)
{
	int evenCount = 0;

	for (int numberIndex = 0; numberIndex < numsSize; ++numberIndex)
	{
		int currentNumber = nums[numberIndex];
		int digitsCount = 0;

		while (currentNumber != 0)
		{
			currentNumber /= 10;

			++digitsCount;
		}

		if (digitsCount % 2 == 0)
		{
			++evenCount;
		}
	}

	return evenCount;
}