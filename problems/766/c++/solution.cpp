// 766. Toeplitz Matrix
#include <vector>

using namespace std;

class Solution
{
	public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix)
	{
		int height = matrix.size();
		int width = matrix[0].size();

		for (int row = 1; row < height; row++)
		{
			for (int column = 1; column < width; column++)
			{
				if (matrix[row][column] != matrix[row - 1][column - 1])
				{
					return false;
				}
			}
		}

		return true;
	}
};