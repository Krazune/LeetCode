// 1394. Find Lucky Integer in an Array
#include <vector>

using namespace;

class Solution
{
	public:
	int findLucky(vector<int>& arr)
	{
		vector<int> frequencies(500, 0); // Could be replaced with a map.

		for (int i = 0; i < arr.size(); ++i)
		{
			++frequencies[arr[i] - 1];
		}

		for (int i = frequencies.size() - 1; i >= 0; --i)
		{
			if (frequencies[i] == i + 1)
			{
				return i + 1;
			}
		}

		return -1;
	}
};