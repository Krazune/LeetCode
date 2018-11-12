// 118. Pascal's Triangle
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> generate(int numRows)
	{
		vector<vector<int>> triangle;

		for (int rowIndex = 0; rowIndex < numRows; ++rowIndex)
		{
			vector<int> currentRow(rowIndex + 1, 0);

			currentRow[0] = 1;

			for (int columnIndex = 1; columnIndex < rowIndex; ++columnIndex)
			{
				currentRow[columnIndex] = triangle[rowIndex - 1][columnIndex - 1] + triangle[rowIndex - 1][columnIndex];
			}

			currentRow[rowIndex] = 1;
			triangle.push_back(currentRow);
		}

		return triangle;
	}
};