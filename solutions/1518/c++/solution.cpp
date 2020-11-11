// 1518. Water Bottles
class Solution
{
	public:
	int numWaterBottles(int numBottles, int numExchange)
	{
		int totalDrank = numBottles;
		int emptyBottles = numBottles;

		while (emptyBottles >= numExchange)
		{
			totalDrank += emptyBottles / numExchange;
			emptyBottles = emptyBottles / numExchange + emptyBottles % numExchange;
		}

		return totalDrank;
	}
};