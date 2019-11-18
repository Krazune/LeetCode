// 1089. Duplicate Zeros
#include <vector>

using namespace std;

class Solution
{
	public:
	void duplicateZeros(vector<int>& arr)
	{
		int leftZeroesCount = 0;

		for (int number : arr)
		{
			if (number == 0)
			{
				++leftZeroesCount;
			}
		}

		if (leftZeroesCount == 0)
		{
			return;
		}

		for (int index = arr.size() - 1; index >= 0; --index)
		{
			int newIndex = index + leftZeroesCount;

			if (newIndex < arr.size())
			{
				arr[newIndex] = arr[index];
			}

			if (arr[index] == 0)
			{
				--leftZeroesCount;

				if (newIndex - 1 < arr.size())
				{
					arr[newIndex - 1] = 0;
				}
			}
		}
	}
};