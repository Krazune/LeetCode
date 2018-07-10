// 868. Transpose Matrix
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> transpose(vector<vector<int>>& A)
	{
		int rowSize = A.size();
		int columnSize = A[0].size();
		vector<vector<int>> transposedMatrix(columnSize, vector<int>(rowSize, 0));

		for (int row = 0; row < rowSize; row++)
		{
			for (int column = 0; column < columnSize; column++)
			{
				transposedMatrix[column][row] = A[row][column];
			}
		}

		return transposedMatrix;
	}
};