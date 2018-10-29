// 8. String to Integer (atoi)
#include <limits.h>

int myAtoi(char* str)
{
	int characterIndex = 0;

	while (str[characterIndex] == ' ')
	{
		characterIndex++;
	}

	bool isPositive = true;

	if (str[characterIndex] == '-')
	{
		isPositive = false;
		characterIndex++;
	}
	else if (str[characterIndex] == '+')
	{
		characterIndex++;
	}

	int integer = 0;

	for (; str[characterIndex] != '\0'; characterIndex++)
	{
		char currentCharacter = str[characterIndex];

		if (!isdigit(currentCharacter))
		{
			break;
		}

		int digit = currentCharacter - '0';

		if (integer > INT_MAX / 10 || (integer == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			return isPositive ? INT_MAX : INT_MIN;
		}

		integer = integer * 10 + digit;
	}

	return isPositive ? integer : -integer;
}