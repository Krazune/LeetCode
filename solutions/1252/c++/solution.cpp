// 1252. Cells with Odd Values in a Matrix
#include <vector>

using namespace std;

class Solution
{
	public:
	int oddCells(int n, int m, vector<vector<int>>& indices)
	{
		vector<int> rowIncrements(n, 0);
		vector<int> columnIncrements(m, 0);

		for (int i = 0; i < indices.size(); ++i)
		{
			++rowIncrements[indices[i][0]];
			++columnIncrements[indices[i][1]];
		}

		int odds = 0;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				int sum = 0;

				sum += rowIncrements[i];
				sum += columnIncrements[j];

				if (sum % 2 != 0)
				{
					++odds;
				}
			}
		}

		return odds;
	}
};