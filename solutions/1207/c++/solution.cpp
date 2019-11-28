// 1207. Unique Number of Occurrences
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace std;

class Solution
{
	public:
	bool uniqueOccurrences(vector<int>& arr)
	{
		unordered_map<int, int> occurrencesCounts;

		for (int occurrence : arr)
		{
			++occurrencesCounts[occurrence];
		}

		unordered_set<int> uniqueCounts;

		for (pair<int, int> occorrenceCount : occurrencesCounts)
		{
			if (uniqueCounts.find(occorrenceCount.second) != uniqueCounts.end())
			{
				return false;
			}

			uniqueCounts.insert(occorrenceCount.second);
		}

		return true;
	}
};