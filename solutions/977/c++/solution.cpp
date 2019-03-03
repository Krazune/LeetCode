// 977. Squares of a Sorted Array
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> sortedSquares(vector<int>& A)
	{
		int size = A.size();
		vector<int> squares(size, 0);

		for (int index = 0; index < size; ++index)
		{
			A[index] *= A[index];
		}

		int leftIndex = 0;
		int rightIndex = size - 1;

		for (int insertIndex = rightIndex; insertIndex >= 0; --insertIndex)
		{
			int leftValue = A[leftIndex];
			int rightValue = A[rightIndex];

			if (leftValue > rightValue)
			{
				squares[insertIndex] = leftValue;
				++leftIndex;
			}
			else
			{
				squares[insertIndex] = rightValue;
				--rightIndex;
			}
		}

		return squares;
	}
};