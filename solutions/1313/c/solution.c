// 1313. Decompress Run-Length Encoded List
#include <stdlib.h>

int *decompressRLElist(int *nums, int numsSize, int *returnSize)
{
	int decompressedSize = 0;

	for (int numberIndex = 0; numberIndex < numsSize; numberIndex += 2)
	{
		decompressedSize += nums[numberIndex];
	}

	int *decompressedList = malloc(decompressedSize * sizeof (int));

	*returnSize = decompressedSize;

	int decompressedListIndex = 0;

	for (int numberIndex = 0; numberIndex < numsSize; numberIndex += 2)
	{
		int frequency = nums[numberIndex];
		int value = nums[numberIndex + 1];

		for (int valueIndex = 0; valueIndex < frequency; ++valueIndex)
		{
			decompressedList[decompressedListIndex] = value;
			++decompressedListIndex;
		}
	}

	return decompressedList;
}