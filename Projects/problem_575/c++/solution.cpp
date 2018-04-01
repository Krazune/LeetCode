// 575. Distribute Candies
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	int distributeCandies(vector<int>& candies)
	{
		unordered_set<int> c(candies.begin(), candies.end());
		int h = candies.size() / 2;
		
		return h > c.size() ? c.size() : h;
	}
};