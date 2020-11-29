// 1672. Richest Customer Wealth
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	int maximumWealth(vector<vector<int>>& accounts)
	{
		int richestWealth = 0;

		for (int i = 0; i < accounts.size(); ++i)
		{
			int currentWealth = 0;

			for (int j = 0; j < accounts[i].size(); ++j)
			{
				currentWealth += accounts[i][j];
			}

			richestWealth = max(currentWealth, richestWealth);
		}

		return richestWealth;
	}
};