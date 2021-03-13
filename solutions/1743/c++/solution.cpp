// 1743. Restore the Array From Adjacent Pairs
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	vector<int> restoreArray(vector<vector<int>>& adjacentPairs)
	{
		unordered_map<int, vector<int>> connections;

		for (int i = 0; i < adjacentPairs.size(); ++i)
		{
			connections[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
			connections[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
		}

		vector<int> restoredArray;
		int currentValue = 0;

		for (auto it = connections.begin(); it != connections.end(); ++it)
		{
			if (it->second.size() == 1)
			{
				restoredArray.push_back(it->first);
				restoredArray.push_back(it->second[0]);
				currentValue = it->second[0];

				break;
			}
		}

		while (restoredArray.size() <= adjacentPairs.size())
		{
			vector<int> currentConnection = connections[currentValue];

			if (restoredArray[restoredArray.size() - 2] == currentConnection[0])
			{
				currentValue = currentConnection[1];
			}
			else
			{
				currentValue = currentConnection[0];
			}

			restoredArray.push_back(currentValue);
		}

		return restoredArray;
	}
};