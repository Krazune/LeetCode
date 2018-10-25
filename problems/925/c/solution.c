// 925. Long Pressed Name
#include <stdbool.h>

bool isLongPressedName(char* name, char* typed)
{
	int nameIndex = 0;
	int typedIndex = 0;
	char lastCharacter = 0;

	while (typed[typedIndex] != '\0')
	{
		if (name[nameIndex] != typed[typedIndex])
		{
			if (lastCharacter != 0 && typed[typedIndex] == lastCharacter)
			{
				typedIndex++;
			}
			else
			{
				return false;
			}
		}
		else
		{
			lastCharacter = name[nameIndex];
			nameIndex++;
			typedIndex++;
		}
	}

	return name[nameIndex] == '\0';
}