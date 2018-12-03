// 485. Max Consecutive Ones
#include <vector>

using namespace std;

class Solution
{
	public:
	int findMaxConsecutiveOnes(vector<int>& nums)
	{
		int maximum = 0;

		for (int index = 0, currentCount = 0; index < nums.size(); index++)
		{
			if (nums[index] == 1)
			{
				currentCount++;

				if (currentCount > maximum)
				{
					maximum = currentCount;
				}
			}
			else
			{
				currentCount = 0;
			}
		}

		return maximum;
	}
};