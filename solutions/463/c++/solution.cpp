// 463. Island Perimeter
#include <vector>

using namespace std;

class Solution
{
	public:
	int islandPerimeter(vector<vector<int>>& grid)
	{
		int perimeter = 0;

		for (int y = 0; y < grid.size(); y++)
		{
			for (int x = 0; x < grid[0].size(); x++)
			{
				if (grid[y][x] == 1)
				{
					perimeter += 4;

					if (y > 0 && grid[y - 1][x] == 1)
					{
						perimeter -= 2;
					}

					if (x > 0 && grid[y][x - 1] == 1)
					{
						perimeter -= 2;
					}
				}
			}
		}

		return perimeter;
	}
};