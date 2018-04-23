// 387. First Unique Character in a String
int firstUniqChar(char* s)
{
	int a[26] = { 0 };

	for (int i = 0; s[i] != '\0'; i++) a[s[i] - 'a']++;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (a[s[i] - 'a'] == 1) return i;
	}

	return -1;
}