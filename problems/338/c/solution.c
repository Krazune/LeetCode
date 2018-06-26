// 338. Counting Bits
#include <stdlib.h>

int* countBits(int num, int* returnSize)
{
	*returnSize = num + 1;

	int* counts = calloc(*returnSize, sizeof(int));

	for (int index = 1; index <= num; index++)
	{
		counts[index] = counts[index & (index - 1)] + 1;
	}

	return counts;
}