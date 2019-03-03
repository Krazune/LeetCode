// 999. Available Captures for Rook
#include <vector>

#define ROW_COUNT 8
#define COLUMN_COUNT 8

using namespace std;

class Solution
{
	public:
	int numRookCaptures(vector<vector<char>>& board)
	{
		int rookRow = 0;
		int rookColumn = 0;

		for (int row = 0; row < ROW_COUNT; ++row)
		{
			for (int column = 0; column < COLUMN_COUNT; ++column)
			{
				if (board[row][column] == 'R')
				{
					rookRow = row;
					rookColumn = column;

					goto rookFound;
				}
			}
		}

		rookFound:
		int captures = 0;

		for (int row = rookRow - 1; row >= 0; --row)
		{
			char piece = board[row][rookColumn];

			if (piece == 'B')
			{
				break;
			}

			if (piece == 'p')
			{
				captures++;
				break;
			}
		}

		for (int row = rookRow + 1; row < ROW_COUNT; ++row)
		{
			char piece = board[row][rookColumn];

			if (piece == 'B')
			{
				break;
			}

			if (piece == 'p')
			{
				captures++;
				break;
			}
		}

		for (int column = rookColumn - 1; column >= 0; --column)
		{
			char piece = board[rookRow][column];

			if (piece == 'B')
			{
				break;
			}

			if (piece == 'p')
			{
				captures++;
				break;
			}
		}

		for (int column = rookColumn + 1; column < COLUMN_COUNT; ++column)
		{
			char piece = board[rookRow][column];

			if (piece == 'B')
			{
				break;
			}

			if (piece == 'p')
			{
				captures++;
				break;
			}
		}

		return captures;
	}
};