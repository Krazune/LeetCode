// 387. First Unique Character in a String
int firstUniqChar(char* s)
{
	int letterCounts[26] = { 0 };

	for (int index = 0; s[index] != '\0'; index++)
	{
		letterCounts[s[index] - 'a']++;
	}

	for (int index = 0; s[index] != '\0'; index++)
	{
		if (letterCounts[s[index] - 'a'] == 1)
		{
			return index;
		}
	}

	return -1;
}