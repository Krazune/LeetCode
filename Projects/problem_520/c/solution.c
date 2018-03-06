// 520. Detect Capital
#include <ctype.h>

int detectCapitalUse(char* word)
{
	if (isupper(word[0]))
	{
		if (isupper(word[1]))
		{
			int i = 2;

			for ( ; word[i] != '\0'; i++)
			{
				if (islower(word[i])) return 0;
			}
			
			return 1;
		}
		else
		{
			int i = 1;

			for ( ; word[i] != '\0'; i++)
			{
				if (isupper(word[i])) return 0;
			}
			
			return 1;
		}
	}
	else
	{
		int i = 0;

		for ( ; word[i] != '\0'; i++)
		{
			if (isupper(word[i])) return 0;
		}
		
		return 1;
	}
}
