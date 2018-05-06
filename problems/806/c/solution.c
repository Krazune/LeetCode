// 806. Number of Lines To Write String
#include <stdlib.h>

int* numberOfLines(int* widths, int widthsSize, char* S, int* returnSize)
{
	int* result = malloc(sizeof(int) * 2);
	int lastLineWidth = 0;

	result[0] = 1;
	result[1] = 1;
	*returnSize = 2;

	for (int index = 0; S[index] != '\0'; index++)
	{
		int lineWidth = widths[S[index] - 'a'];

		if (lastLineWidth + lineWidth > 100)
		{
			result[0]++;
			lastLineWidth = lineWidth;
		}
		else
		{
			lastLineWidth += lineWidth;
		}
	}

	result[1] = lastLineWidth;

	return result;
}