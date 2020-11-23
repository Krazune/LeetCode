// 1331. Rank Transform of an Array
#include <vector>
#include <pair>
#include <utility>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	vector<int> arrayRankTransform(vector<int>& arr)
	{
		vector<pair<int, int>> sorted(arr.size());

		for (int i = 0; i < arr.size(); ++i)
		{
			sorted[i] = make_pair(arr[i], i);
		}

		sort(sorted.begin(), sorted.end());

		vector<int> result(arr.size(), 0);
		int currentRank = 0;

		for (int i = 0; i < sorted.size(); ++i)
		{
			if (i == 0 || sorted[i].first != sorted[i - 1].first)
			{
				++currentRank;
			}

			result[sorted[i].second] = currentRank;
		}

		return result;
	}
};