// 908. Smallest Range I
#include <limits.h>

int smallestRangeI(int* A, int ASize, int K)
{
	int min = INT_MAX;
	int max = INT_MIN;

	for (int index = 0; index < ASize; index++)
	{
		int currentValue = A[index];

		if (currentValue < min)
		{
			min = currentValue;
		}

		if (currentValue > max)
		{
			max = currentValue;
		}
	}

	int finalDifference = (max - min) - 2 * K;

	return (finalDifference < 0) ? 0 : finalDifference;
}