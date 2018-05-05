// 728. Self Dividing Numbers
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> selfDividingNumbers(int left, int right)
	{
		vector<int> validNumbers;

		for (int index = left; index <= right; index++)
		{
			int currentNumber = index;
			bool selfDividing = true;

			do
			{
				int digit = currentNumber % 10;

				if (digit == 0 || index % digit != 0)
				{
					selfDividing = false;
					break;
				}
				else
				{
					currentNumber /= 10;
				}
			}
			while (currentNumber > 0);

			if (selfDividing)
			{
				validNumbers.push_back(index);
			}
		}

		return validNumbers;
	}
};