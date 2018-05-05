// 788. Rotated Digits
int rotatedDigits(int N)
{
	int count = 0;

	for (int index = 1; index <= N; index++)
	{
		int currentNumber = index;
		int valid = 0;

		while (currentNumber != 0)
		{
			int digit = currentNumber % 10;

			if (digit == 2 || digit == 5 || digit == 6 || digit == 9)
			{
				valid = 1;
			}
			else if (digit != 0 && digit != 1 && digit != 8)
			{
				valid = 0;
				break;
			}

			currentNumber /= 10;
		}

		if (valid)
		{
			count++;
		}
	}

	return count;
}