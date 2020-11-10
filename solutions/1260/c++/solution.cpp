// 1260. Shift 2D Grid
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
	{
		int width = grid[0].size();
		int height = grid.size();
		vector<vector<int>> shiftedGrid(height, vector<int>(width, 0));
		int totalSize = height * width;
		int currentShiftedIndex = k;

		for (int row = 0; row < height; ++row)
		{
			for (int column = 0; column < width; ++column)
			{
				int newIndex = currentShiftedIndex % totalSize;
				int newRow = newIndex / width;
				int newColumn = newIndex % width;

				shiftedGrid[newRow][newColumn] = grid[row][column];
				++currentShiftedIndex;
			}
		}

		return shiftedGrid;
	}
};