// 1539. Kth Missing Positive Number
#include <vector>

using namespace std;

class Solution
{
	public:
	int findKthPositive(vector<int>& arr, int k)
	{
		int currentInteger = 1;

		for (int i = 0; i < arr.size(); ++i)
		{
			if (arr[i] == currentInteger)
			{
				++currentInteger;

				continue;
			}

			if (k == 1)
			{
				return currentInteger;
			}

			++currentInteger;
			--i;
			--k;
		}

		return currentInteger + k - 1;
	}
};