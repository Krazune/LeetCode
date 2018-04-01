// 788. Rotated Digits
int rotatedDigits(int N)
{
	int c = 0;
	
	for (int i = 1; i <= N; i++)
	{
		int n = i, g = 0;
		
		while (n != 0)
		{
			int d = n % 10;
			
			if (d == 2 || d == 5 || d == 6 || d == 9) g = 1;
			else if (d != 0 && d != 1 && d != 8)
			{
				g = 0;
				break;
			}
			
			n /= 10;
		}
		
		if (g) c++;
	}
	
	return c;
}