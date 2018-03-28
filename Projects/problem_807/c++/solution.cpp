// 807. Max Increase to Keep City Skyline
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	int maxIncreaseKeepingSkyline(vector<vector<int>>& grid)
	{
		int s = 0, n = grid.size();
		vector<int> r(grid.size(), 0), c(grid[0].size(), 0);
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				r[i] = max(r[i], grid[i][j]);
				c[i] = max(c[i], grid[j][i]);
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) s += min(r[i], c[j]) - grid[i][j];
		}

		return s;
	}
};