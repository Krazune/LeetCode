// 806. Number of Lines To Write String
#include <stdlib.h>

int* numberOfLines(int* widths, int widthsSize, char* S, int* returnSize)
{
	int* r = malloc(sizeof(int) * 2);
	int l = 0;
	
	r[0] = r[1] = 1;
	*returnSize = 2;

	for (int i = 0; S[i] != '\0'; i++)
	{
		int w = widths[S[i] - 'a'];

		if (l + w > 100)
		{
			r[0]++;
			l = w;
		}
		else l += w;
	}

	r[1] = l;

	return r;
}