// 389. Find the Difference
char findTheDifference(char* s, char* t)
{
	int index = 0;
	int difference = 0;

	for (; s[index] != 0; index++)
	{
		difference ^= s[index] ^ t[index];
	}

	return difference ^ t[index];
}