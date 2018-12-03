// 367. Valid Perfect Square
class Solution
{
	public:
	bool isPerfectSquare(int num)
	{
		int left = 0;
		int right = num;

		while (left <= right)
		{
			long mid = left + (right - left) / 2;
			long square = mid * mid;

			if (square == num)
			{
				return true;
			}
			else if (square > num)
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}

		return false;
	}
};