// 1380. Lucky Numbers in a Matrix
#include <vector>
#include <climits>

using namespace std;

class Solution
{
	public:
	vector<int> luckyNumbers(vector<vector<int>>& matrix)
	{
		vector<int> rowsMinimum(matrix.size(), INT_MAX);
		vector<int> columnsMaximum(matrix[0].size(), 0);

		for (int i = 0; i < matrix.size(); ++i)
		{
			for (int j = 0; j < matrix[0].size(); ++j)
			{
				if (matrix[i][j] < rowsMinimum[i])
				{
					rowsMinimum[i] = matrix[i][j];
				}
			}
		}

		for (int i = 0; i < matrix.size(); ++i)
		{
			for (int j = 0; j < matrix[0].size(); ++j)
			{
				if (matrix[i][j] > columnsMaximum[j])
				{
					columnsMaximum[j] = matrix[i][j];
				}
			}
		}

		vector<int> luckyValues;

		for (int i = 0; i < rowsMinimum.size(); ++i)
		{
			for (int j = 0; j < columnsMaximum.size(); ++j)
			{
				if (rowsMinimum[i] == columnsMaximum[j])
				{
					luckyValues.push_back(rowsMinimum[i]);
				}
			}
		}

		return luckyValues;
	}
};