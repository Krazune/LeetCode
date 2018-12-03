// 566. Reshape the Matrix
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c)
	{
		if (nums.size() * nums[0].size() != r * c)
		{
			return nums;
		}

		vector<vector<int>> matrix(r, vector<int>(c));
		int columnCount = nums[0].size();

		for (int row = 0; row < r; row++)
		{
			for (int column = 0; column < c; column++)
			{
				int unidimensionalIndex = row * c + column;

				matrix[row][column] = nums[unidimensionalIndex / columnCount][unidimensionalIndex % columnCount];
			}
		}

		return matrix;
	}
};