// 289. Game of Life
#include <vector>

using namespace std;

class Solution
{
	public:
	void gameOfLife(vector<vector<int>>& board)
	{
		for (int x = 0; x < board.size(); ++x)
		{
			for (int y = 0; y < board[0].size(); ++y)
			{
				int aliveNeighborCount = 0;

				for (int neighborX = x - 1; neighborX <= x + 1; ++neighborX)
				{
					for (int neighborY = y - 1; neighborY <= y + 1; ++neighborY)
					{
						if (neighborX < 0 || neighborX >= board.size() || neighborY < 0 || neighborY >= board[0].size() || (neighborX == x && neighborY == y))
						{
							continue;
						}

						if (board[neighborX][neighborY] == 1 || board[neighborX][neighborY] == 3)
						{
							++aliveNeighborCount;
						}
					}
				}

				if ((aliveNeighborCount < 2 || aliveNeighborCount > 3) && board[x][y] == 1)
				{
					board[x][y] = 3;
				}
				else if (aliveNeighborCount == 3 && board[x][y] == 0)
				{
					board[x][y] = 2;
				}
			}
		}

		for (int x = 0; x < board.size(); ++x)
		{
			for (int y = 0; y < board[0].size(); ++y)
			{
				if (board[x][y] == 2)
				{
					board[x][y] = 1;
				}
				else if (board[x][y] == 3)
				{
					board[x][y] = 0;
				}
			}
		}
	}
};