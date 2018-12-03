// 905. Sort Array By Parity
#include <vector>
#include <utility>

using namespace std;

class Solution
{
	public:
	vector<int> sortArrayByParity(vector<int>& A)
	{
		int evenIndex = 0;
		int oddIndex = A.size() - 1;

		while (evenIndex < oddIndex)
		{
			if (A[evenIndex] % 2 == 0)
			{
				evenIndex++;
			}
			else
			{
				swap(A[evenIndex], A[oddIndex]);
				oddIndex--;
			}
		}

		return A;
	}
};