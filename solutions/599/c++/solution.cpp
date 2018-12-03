// 599. Minimum Index Sum of Two Lists
#include <vector>
#include <string>
#include <unordered_map>
#include <climits>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)
	{
		unordered_map<string, int> sums;

		for (int index = 0; index < list1.size(); index++)
		{
			sums[list1[index]] = index;
		}

		int lowestSum = INT_MAX;

		for (int index = 0; index < list2.size(); index++)
		{
			auto restaurantFound = sums.find(list2[index]);

			if (restaurantFound != sums.end())
			{
				restaurantFound->second += index;
				lowestSum = min(lowestSum, restaurantFound->second);
			}
		}

		vector<string> result;

		for (int index = 0; index < list2.size(); index++)
		{
			auto restaurantFound = sums.find(list2[index]);

			if (restaurantFound != sums.end() && restaurantFound->second == lowestSum)
			{
				result.push_back(restaurantFound->first);
			}
		}

		return result;
	}
};