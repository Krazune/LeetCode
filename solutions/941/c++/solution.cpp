// 941. Valid Mountain Array
#include <vector>

using namespace std;

class Solution
{
	public:
	bool validMountainArray(vector<int>& A)
	{
		int valueCount = A.size();

		if (valueCount < 3 || valueCount == 2)
		{
			return false;
		}

		int index = 1;

		for (; index < valueCount; ++index)
		{
			int previousValue = A[index - 1];
			int currentValue = A[index];

			if (previousValue == currentValue)
			{
				return false;
			}

			if (previousValue > currentValue)
			{
				break;
			}
		}

		if (index == 1 || index == valueCount)
		{
			return false;
		}

		for (; index < valueCount; ++index)
		{
			int previousValue = A[index - 1];
			int currentValue = A[index];

			if (previousValue <= currentValue)
			{
				return false;
			}
		}

		return true;
	}
};