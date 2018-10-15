// 921. Minimum Add to Make Parentheses Valid
int minAddToMakeValid(char* S)
{
	int level = 0;
	int invalidCount = 0;

	for (int index = 0; S[index] != '\0'; index++)
	{
		if (S[index] == '(')
		{
			level++;
		}
		else if (level == 0)
		{
			invalidCount++;
		}
		else
		{
			level--;
		}
	}

	return level + invalidCount;
}