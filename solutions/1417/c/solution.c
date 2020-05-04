// 1417. Reformat The String
#include <stdlib.h>
#include <ctype.h>

char *reformat(char *s)
{
	int digitCount = 0;
	int letterCount = 0;
	int stringLength = 0;

	for (int characterIndex = 0; s[characterIndex] != '\0'; ++characterIndex)
	{
		if (isdigit(s[characterIndex]))
		{
			++digitCount;
		}
		else
		{
			++letterCount;
		}

		++stringLength;
	}

	int countDifference = abs(digitCount - letterCount);

	if (countDifference != 0 && countDifference != 1)
	{
		return calloc(sizeof (char), 1);
	}

	int digitIndex = 0;
	int letterIndex = 0;

	if (digitCount > letterCount)
	{
		letterIndex = 1;
	}
	else
	{
		digitIndex = 1;
	}

	char *newString = malloc(sizeof (char) * (stringLength + 1));

	for (int characterIndex = 0; characterIndex < stringLength; ++characterIndex)
	{
		char currentCharacter = s[characterIndex];

		if (isdigit(currentCharacter))
		{
			newString[digitIndex] = currentCharacter;
			digitIndex += 2;
		}
		else
		{
			newString[letterIndex] = currentCharacter;
			letterIndex += 2;
		}
	}

	newString[stringLength] = '\0';

	return newString;
}