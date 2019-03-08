// 119. Pascal's Triangle II
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> getRow(int rowIndex)
	{
		int count = rowIndex + 1;
		vector<int> row(1, 1);

		for (int currentRowIndex = 1; currentRowIndex < count; ++currentRowIndex)
		{
			vector<int> nextRow(currentRowIndex + 1, 1);

			for (int valueIndex = 1; valueIndex < currentRowIndex; ++valueIndex)
			{
				nextRow[valueIndex] = row[valueIndex - 1] + row[valueIndex];
			}

			row = nextRow;
		}

		return row;
	}
};