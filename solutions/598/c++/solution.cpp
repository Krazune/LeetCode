// 598. Range Addition II
#include <vector>

using namespace std;

class Solution
{
	public:
	int maxCount(int m, int n, vector<vector<int>>& ops)
	{
		int rows = m;
		int columns = n;

		for (int i = 0; i < ops.size(); ++i)
		{
			if (ops[i][0] < rows)
			{
				rows = ops[i][0];
			}

			if (ops[i][1] < columns)
			{
				columns = ops[i][1];
			}
		}

		return rows * columns;
	}
};