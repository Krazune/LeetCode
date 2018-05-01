// 441. Arranging Coins
class Solution
{
	public:
	int arrangeCoins(int number)
	{
		int rows = 1;

		while (number >= rows)
		{
			number -= rows;
			rows++;
		}

		return rows - 1;
	}
};