// 1221. Split a String in Balanced Strings
int balancedStringSplit(char* s)
{
	int splitCount = 0;
	int rCount = 0;
	int lCount = 0;

	for (int characterIndex = 0; s[characterIndex] != '\0'; ++characterIndex)
	{
		if (s[characterIndex] == 'R')
		{
			++rCount;
		}
		else
		{
			++lCount;
		}

		if (rCount == lCount)
		{
			++splitCount;
			rCount = 0;
			lCount = 0;
		}
	}

	return splitCount;
}