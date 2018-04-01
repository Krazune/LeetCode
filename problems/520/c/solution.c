// 520. Detect Capital
#include <ctype.h>

int detectCapitalUse(char* word)
{
	if (isupper(word[0]))
	{
		if (isupper(word[1]))
		{
			for (int i = 2; word[i] != '\0'; i++)
			{
				if (islower(word[i])) return 0;
			}
			
			return 1;
		}
		else
		{
			for (int = 1; word[i] != '\0'; i++)
			{
				if (isupper(word[i])) return 0;
			}
			
			return 1;
		}
	}
	else
	{
		for (int i = 0; word[i] != '\0'; i++)
		{
			if (isupper(word[i])) return 0;
		}
		
		return 1;
	}
}
