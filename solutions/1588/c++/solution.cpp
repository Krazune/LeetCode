// 1588. Sum of All Odd Length Subarrays
// Bad solution
#include <vector>

using namespace std;

class Solution
{
	public:
	int sumOddLengthSubarrays(vector<int>& arr)
	{
		int sum = 0;
		int subarraySize = (arr.size() % 2 == 0) ? arr.size() - 1 : arr.size();

		while (subarraySize > 0)
		{
			for (int i = 0; i < arr.size() - subarraySize + 1; ++i)
			{
				for (int j = i; j < i + subarraySize; ++j)
				{
					sum += arr[j];
				}
			}

			subarraySize -= 2;
		}

		return sum;
	}
};