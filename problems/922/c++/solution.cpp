// 922. Sort Array By Parity II
#include <vector>
#include <utility>

using namespace std;

class Solution
{
	public:
	vector<int> sortArrayByParityII(vector<int>& A)
	{
		int evenIndex = 0;
		int oddIndex = 1;
		int numberCount = A.size();

		while (evenIndex < numberCount)
		{
			while (evenIndex < numberCount && A[evenIndex] % 2 == 0)
			{
				evenIndex += 2;
			}

			while (oddIndex < numberCount && A[oddIndex] % 2 != 0)
			{
				oddIndex += 2;
			}

			if (evenIndex < numberCount)
			{
				swap(A[oddIndex], A[evenIndex]);
				oddIndex += 2;
				evenIndex += 2;
			}
		}

		return A;
	}
};