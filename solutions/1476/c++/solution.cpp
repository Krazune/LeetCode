// 1476. Subrectangle Queries
#include <vector>

using namespace std;

class SubrectangleQueries
{
	public:
	SubrectangleQueries(vector<vector<int>>& rectangle) : values(rectangle) {}

	void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
	{
		for (int row = row1; row <= row2; ++row)
		{
			for (int column = col1; column <= col2; ++column)
			{
				values[row][column] = newValue;
			}
		}
	}

	int getValue(int row, int col)
	{
		return values[row][col];
	}

	private:
	vector<vector<int>> values;
};