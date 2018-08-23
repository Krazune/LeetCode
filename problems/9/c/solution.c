// 9. Palindrome Number
#include <stdbool.h>

bool isPalindrome(int x)
{
	if (x < 0)
	{
		return false;
	}

	if (x < 10)
	{
		return true;
	}

	int currentX = x;
	int currentReverse = 0;

	while (currentX > 0)
	{
		currentReverse = currentReverse * 10 + currentX % 10;
		currentX /= 10;
	}

	return currentReverse == x;
}