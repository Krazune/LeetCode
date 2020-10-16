//1431. Kids With the Greatest Number of Candies
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
	{
		vector<bool> results(candies.size());
		int maxCandy = *max_element(candies.begin(), candies.end());

		for (int i = 0; i < candies.size(); ++i)
		{
			results[i] = candies[i] + extraCandies >= maxCandy;
		}

		return results;
	}
};