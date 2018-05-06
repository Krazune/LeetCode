// 821. Shortest Distance to a Character
#include <vector>
#include <string>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	vector<int> shortestToChar(string S, char C)
	{
		vector<int> distances(S.size(), INT_MAX);
		int cIndex = -1;

		for (int index = 0; index < S.size(); index++)
		{
			if (S[index] == C)
			{
				cIndex = index;
			}

			if (cIndex != -1)
			{
				distances[index] = abs(index - cIndex);
			}
		}

		for (int index = S.size() - 1, cIndex = -1; index >= 0; index--)
		{
			if (S[index] == C)
			{
				cIndex = index;
			}

			if (cIndex != -1)
			{
				distances[index] = min(distances[index], abs(index - cIndex));
			}
		}

		return distances;
	}
};