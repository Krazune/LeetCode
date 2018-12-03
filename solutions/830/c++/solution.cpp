// 830. Positions of Large Groups
#include <vector>
#include <string>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> largeGroupPositions(string S)
	{
		int groupIndex = 0;
		int groupSize = S.size();
		vector<vector<int>> groups;

		for (int index = 0; index < groupSize; index++)
		{
			if (index == groupSize - 1 || S[index] != S[index + 1])
			{
				if (index - groupIndex >= 2)
				{
					vector<int> newGroup(2, 0);

					newGroup[0] = groupIndex;
					newGroup[1] = index;

					groups.push_back(newGroup);
				}

				groupIndex = index + 1;
			}
		}

		return groups;
	}
};