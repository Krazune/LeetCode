// 529. Minesweeper
#include <vector>
#include <queue>
#include <set>

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
	vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click)
	{
		char initialCellType = board[click[0]][click[1]];

		if (initialCellType == 'M')
		{
			board[click[0]][click[1]] = 'X';

			return board;
		}

		queue<int> cells;
		int rowCount = board.size();
		int columnCount = board[0].size();
		set<int> seen;

		cells.push(getIndex(click[0], columnCount, click[1]));

		while (!cells.empty())
		{
			int cellCount = cells.size();

			for (int cellIndex = 0; cellIndex < cellCount; cellIndex++)
			{
				int currentCellIndex = cells.front();

				cells.pop();

				if (seen.find(currentCellIndex) != seen.end())
				{
					continue;
				}

				int cellRow = getRow(currentCellIndex, columnCount);
				int cellColumn = getColumn(currentCellIndex, columnCount);

				seen.insert(getIndex(cellRow, columnCount, cellColumn));

				int mineCount = 0;
				vector<int> borderCells;

				for (int currentRow = -1; currentRow < 2; currentRow++)
				{
					for (int currentColumn = -1; currentColumn < 2; currentColumn++)
					{
						if (currentRow == 0 && currentColumn == 0)
						{
							continue;
						}

						int boardRow = cellRow + currentRow;
						int boardColumn = cellColumn + currentColumn;

						if (boardRow >= 0 && boardRow < rowCount && boardColumn >= 0 && boardColumn < columnCount)
						{
							if (board[boardRow][boardColumn] == 'M')
							{
								mineCount++;
							}
							else
							{
								borderCells.push_back(getIndex(boardRow, columnCount, boardColumn));
							}
						}
					}
				}


				if (mineCount > 0)
				{
					board[cellRow][cellColumn] = mineCount + '0';
				}
				else
				{
					board[cellRow][cellColumn] = 'B';

					for (int borderCell : borderCells)
					{
						cells.push(borderCell);
					}
				}
			}
		}

		return board;
	}
};