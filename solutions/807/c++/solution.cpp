// 807. Max Increase to Keep City Skyline
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	int maxIncreaseKeepingSkyline(vector<vector<int>>& grid)
	{
		int sum = 0;
		int size = grid.size();
		vector<int> rows(grid.size(), 0);
		vector<int> columns(grid[0].size(), 0);

		for (int row = 0; row < size; row++)
		{
			for (int column = 0; column < size; column++)
			{
				rows[row] = max(rows[row], grid[row][column]);
				columns[row] = max(columns[row], grid[column][row]);
			}
		}

		for (int row = 0; row < size; row++)
		{
			for (int column = 0; column < size; column++)
			{
				sum += min(rows[row], columns[column]) - grid[row][column];
			}
		}

		return sum;
	}
};