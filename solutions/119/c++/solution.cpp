// 119. Pascal's Triangle II
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> getRow(int rowIndex)
	{
		int count = rowIndex + 1;
		vector<int> row(count, 1);
		vector<int> previousRow(count, 1);

		for (int currentRow = 1; currentRow < count; ++currentRow)
		{
			for (int index = 1; index < currentRow; ++index)
			{
				row[index] = previousRow[index - 1] + previousRow[index];
			}

			previousRow = row;
		}

		return row;
	}
};