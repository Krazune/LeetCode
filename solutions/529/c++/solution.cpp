// 529. Minesweeper
#include <vector>
#include <queue>
#include <set>

using namespace std;

class Solution
{
	int getIndex(int row, int column, int columnCount)
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
		int initialRow = click[0];
		int initialColumn = click[1];

		char initialCellType = board[initialRow][initialColumn];

		if (initialCellType == 'M')
		{
			board[initialRow][initialColumn] = 'X';

			return board;
		}

		queue<int> cellsLeft;
		set<int> cellsSeen;
		int rowCount = board.size();
		int columnCount = board[0].size();

		cellsLeft.push(getIndex(initialRow, initialColumn, columnCount));

		while (!cellsLeft.empty())
		{
			int cellCount = cellsLeft.size();

			for (int cellCounter = 0; cellCounter < cellCount; ++cellCounter)
			{
				int cellIndex = cellsLeft.front();

				cellsLeft.pop();

				if (cellsSeen.find(cellIndex) != cellsSeen.end())
				{
					continue;
				}

				int cellRow = getRow(cellIndex, columnCount);
				int cellColumn = getColumn(cellIndex, columnCount);
				int mineCount = 0;
				vector<int> borderCells;

				cellsSeen.insert(getIndex(cellRow, cellColumn, columnCount));

				for (int rowModifier = -1; rowModifier < 2; ++rowModifier)
				{
					for (int columnModifier = -1; columnModifier < 2; ++columnModifier)
					{
						if (rowModifier == 0 && columnModifier == 0)
						{
							continue;
						}

						int borderRow = cellRow + rowModifier;
						int borderColumn = cellColumn + columnModifier;

						if (borderRow >= 0 && borderRow < rowCount && borderColumn >= 0 && borderColumn < columnCount)
						{
							if (board[borderRow][borderColumn] == 'M')
							{
								++mineCount;
							}
							else
							{
								borderCells.push_back(getIndex(borderRow, borderColumn, columnCount));
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
						cellsLeft.push(borderCell);
					}
				}
			}
		}

		return board;
	}
};