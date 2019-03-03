#include <stdbool.h>

int repeatedNTimes(int* A, int ASize)
{
	bool occurrences[10000] = { false };

	for (int index = 0; index < ASize; ++index)
	{
		int currentValue = A[index];

		if (occurrences[currentValue])
		{
			return currentValue;
		}

		occurrences[currentValue] = true;
	}

	return 0; // unreachable
}