// 1436. Destination City
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	string destCity(vector<vector<string>>& paths)
	{
		unordered_set<string> originCities;

		for (int i = 0; i < paths.size(); ++i)
		{
			originCities.insert(paths[i][0]);
		}

		for (int i = 0; i < paths.size(); ++i)
		{
			if (originCities.count(paths[i][1]) == 0)
			{
				return paths[i][1];
			}
		}

		return "";
	}
};