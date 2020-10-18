// 1528. Shuffle String
#include <stdlib.h>

char* restoreString(char* s, int* indices, int indicesSize)
{
	char* result = malloc(sizeof(char) * (indicesSize + 1));

	result[indicesSize] = '\0';

	for (int i = 0; i < indicesSize; ++i)
	{
		result[indices[i]] = s[i];
	}

	return result;
}