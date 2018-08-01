// 860. Lemonade Change
#include <vector>

class Solution
{
	public:
	bool lemonadeChange(vector<int>& bills)
	{
		int change[3] = { 0 };

		for (int bill : bills)
		{
			switch (bill)
			{
				case 5:
				change[0]++;
				break;

				case 10:
				change[1]++;

				if (change[0] > 0)
				{
					change[0]--;
				}
				else
				{
					return false;
				}
				break;

				case 20:
				change[2]++;

				if (change[1] > 0 && change[0] > 0)
				{
					change[0]--;
					change[1]--;
				}
				else if (change[0] > 2)
				{
					change[0] -= 3;
				}
				else
				{
					return false;
				}
				break;
			}
		}

		return true;
	}
};