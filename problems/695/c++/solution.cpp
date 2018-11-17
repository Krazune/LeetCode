// 695. Max Area of Island
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution
{
	int getIndex(int row, int columnCount, int column)
	{
		return row * columnCount + column;
	}

	int getRow(int index, int columnCount)
	{
		return index / columnCount;
	}

	int getColumn(int index, int columnCount)
	{
		return index % columnCount;
	}

	public:
	int maxAreaOfIsland(vector<vector<int>>& grid)
	{
		int rowCount = grid.size();

		if (rowCount == 0)
		{
			return 0;
		}

		int columnCount = grid[0].size();
		vector<vector<bool>> visited (rowCount, vector<bool>(columnCount, false));
		int maxArea = 0;

		for (int row = 0; row < rowCount; row++)
		{
			for (int column = 0; column < columnCount; column++)
			{
				if (!visited[row][column])
				{
					if (grid[row][column] == 1)
					{
						int currentArea = 0;

						queue<int> islandCells;

						islandCells.push(getIndex(row, columnCount, column));

						while (!islandCells.empty())
						{
							int currentCellIndex = islandCells.front();

							islandCells.pop();

							int currentCellRow = getRow(currentCellIndex, columnCount);
							int currentCellColumn = getColumn(currentCellIndex, columnCount);

							if (visited[currentCellRow][currentCellColumn] || grid[currentCellRow][currentCellColumn] == 0)
							{
								continue;
							}

							if (currentCellRow > 0)
							{
								islandCells.push(getIndex(currentCellRow - 1, columnCount, currentCellColumn));
							}

							if (currentCellRow < rowCount - 1)
							{
								islandCells.push(getIndex(currentCellRow + 1, columnCount, currentCellColumn));
							}

							if (currentCellColumn > 0)
							{
								islandCells.push(getIndex(currentCellRow, columnCount, currentCellColumn - 1));
							}

							if (currentCellColumn < columnCount - 1)
							{
								islandCells.push(getIndex(currentCellRow, columnCount, currentCellColumn + 1));
							}

							++currentArea;
							visited[currentCellRow][currentCellColumn] = true;
						}

						maxArea = max(currentArea, maxArea);
					}
					else
					{
						visited[row][column] = true;
					}
				}
			}
		}

		return maxArea;
	}
};