// 1281. Subtract the Product and Sum of Digits of an Integer
int subtractProductAndSum(int n)
{
	int currentNumber = n;
	int product = 1; // The problem states that n is never 0.
	int sum = 0;

	while (currentNumber != 0)
	{
		int digit = currentNumber % 10;

		currentNumber /= 10;

		product *= digit;
		sum += digit;
	}

	return product - sum;
}