// 575. Distribute Candies
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	int distributeCandies(vector<int>& candies)
	{
		unordered_set<int> candyDistributions(candies.begin(), candies.end());
		int halfCount = candies.size() / 2;

		return halfCount > candyDistributions.size() ? candyDistributions.size() : halfCount;
	}
};