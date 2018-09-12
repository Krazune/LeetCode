// 896. Monotonic Array
#include <stdbool.h>

bool isMonotonic(int* A, int ASize)
{
	if (ASize == 1)
	{
		return true;
	}

	bool isIncreasing;
	int index;

	for (index = 1; index < ASize; index++)
	{
		int currentValue = A[index];
		int previousValue = A[index - 1];

		if (previousValue == currentValue)
		{
			continue;
		}

		isIncreasing = previousValue < currentValue;
		break;
	}

	for (; index < ASize; index++)
	{
		int currentValue = A[index];
		int previousValue = A[index - 1];

		if ((isIncreasing && previousValue > currentValue) || (!isIncreasing && previousValue < currentValue))
		{
			return false;
		}
	}

	return true;
}