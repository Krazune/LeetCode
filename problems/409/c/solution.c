// 409. Longest Palindrome
#include <ctype.h>
#include <stdbool.h>

int longestPalindrome(char* s)
{
	int frequencies[52] = { 0 };

	for (int index = 0; s[index] != '\0'; index++)
	{
		char currentChar = s[index];

		if (isupper(currentChar))
		{
			frequencies[currentChar - 'A']++;
		}
		else
		{
			frequencies[currentChar - 'a' + 26]++;
		}
	}

	int longest = 0;
	bool oddExists = false;

	for (int index = 0; index < 52; index++)
	{
		int currentFrequency = frequencies[index];

		longest += currentFrequency;

		if (currentFrequency % 2 != 0)
		{
			longest--;
			oddExists = true;
		}
	}

	if (oddExists)
	{
		longest++;
	}

	return longest;
}