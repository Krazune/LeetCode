// 1572. Matrix Diagonal Sum
#include <vector>

using namespace std;

class Solution
{
	public:
	int diagonalSum(vector<vector<int>>& mat)
	{
		int sum = 0;

		for (int i = 0, j = mat.size() - 1; i < mat.size(); ++i, --j)
		{
			sum += mat[i][i];
			sum += mat[i][j];
		}

		if (mat.size() % 2 != 0)
		{
			int centerIndex = mat.size() / 2;

			sum -= mat[centerIndex][centerIndex];
		}

		return sum;
	}
};