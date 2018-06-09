// 50. Pow(x, n)
double myPow(double x, int n)
{
	if (n==0)
	{
		return 1;
	}

	long currentN = n;

	if (currentN < 0)
	{
		currentN = -currentN;
		x = 1 / x;
	}

	double result = 1;

	while (currentN > 0)
	{
		if (currentN & 1 == 1)
		{
			result *= x;
		}

		x *= x;
		currentN >>= 1;
	}

	return result;
}