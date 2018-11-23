// 944. Delete Columns to Make Sorted
#include <vector>

using namespace std;

class Solution
{
	public:
	int minDeletionSize(vector<string>& A)
	{
		int minimum = 0;
		int lastRowIndex = A.size() - 1;
		int columnCount = A[0].size();

		for (int column = 0; column < columnCount; ++column)
		{
			for (int row = 0; row < lastRowIndex; ++row)
			{
				if (A[row][column] > A[row + 1][column])
				{
					++minimum;

					break;
				}
			}
		}

		return minimum;
	}
};