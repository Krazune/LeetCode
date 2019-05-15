// 509. Fibonacci Number
int fib(int N)
{
	if (N == 0)
	{
		return 0;
	}

	if (N == 1 || N == 2)
	{
		return 1;
	}

	int previous = 1;
	int current = 2;

	for (int n = 4; n <= N; ++n)
	{
		int newResult = previous + current;

		previous = current;
		current = newResult;
	}

	return current;
}