// 661. Image Smoother
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> imageSmoother(vector<vector<int>>& M)
	{
		int rowCount = M.size();
		int columnCount = M[0].size();
		vector<vector<int>> smoothImage(rowCount, vector<int>(columnCount));

		for (int rowIndex = 0; rowIndex < rowCount; rowIndex++)
		{
			for (int columnIndex = 0; columnIndex < columnCount; columnIndex++)
			{
				int total = M[rowIndex][columnIndex];
				int cellCount = 1;

				if (columnIndex > 0)
				{
					total += M[rowIndex][columnIndex - 1];
					cellCount++;
				}

				if (columnIndex < columnCount - 1)
				{
					total += M[rowIndex][columnIndex + 1];
					cellCount++;
				}

				if (rowIndex > 0)
				{
					total += M[rowIndex - 1][columnIndex];
					cellCount++;

					if (columnIndex > 0)
					{
						total += M[rowIndex - 1][columnIndex - 1];
						cellCount++;
					}

					if (columnIndex < columnCount - 1)
					{
						total += M[rowIndex - 1][columnIndex + 1];
						cellCount++;
					}
				}

				if (rowIndex < rowCount - 1)
				{
					total += M[rowIndex + 1][columnIndex];
					cellCount++;

					if (columnIndex > 0)
					{
						total += M[rowIndex + 1][columnIndex - 1];
						cellCount++;
					}

					if (columnIndex < columnCount - 1)
					{
						total += M[rowIndex + 1][columnIndex + 1];
						cellCount++;
					}
				}

				smoothImage[rowIndex][columnIndex] = total / cellCount;
			}
		}

		return smoothImage;
	}
};