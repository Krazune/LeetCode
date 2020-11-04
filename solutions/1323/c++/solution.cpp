// 1323. Maximum 69 Number
#include <cmath>

class Solution
{
	public:
	int maximum69Number (int num)
	{
		int currentNum = num;
		int leftMostSixPosition = -1;
		int currentPosition = 0;

		while (currentNum != 0)
		{
			int digit = currentNum % 10;

			currentNum /= 10;

			if (digit == 6)
			{
				leftMostSixPosition = currentPosition;
			}

			++currentPosition;
		}

		if (leftMostSixPosition == -1)
		{
			return num;
		}

		return num + 3 * pow(10, leftMostSixPosition);
	}
};