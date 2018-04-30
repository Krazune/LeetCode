// 374. Guess Number Higher or Lower
int guess(int num);

class Solution
{
	public:
	int guessNumber(int n)
	{
		int low = 1;
		int high = n;

		while (low <= high)
		{
			int middle = low + (high - low) / 2;
			int guessResult = guess(middle);

			if (guessResult == 0)
			{
				return middle;
			}
			else if (guessResult == -1)
			{
				high = middle - 1;
			}
			else
			{
				low = middle + 1;
			}
		}

		return -1;
	}
};