// 628. Maximum Product of Three Numbers
#include <vector>
#include <algorithm>
#include <climits>

class Solution
{
	public:
	int maximumProduct(vector<int>& nums)
	{
		int highest = INT_MIN;
		int secondHighest = INT_MIN;
		int thirdHighest = INT_MIN;
		int lowest = INT_MAX;
		int secondLowest = INT_MAX;
		
		for (int number : nums)
		{
			if (number > highest)
			{
				thirdHighest = secondHighest;
				secondHighest = highest;
				highest = number;
			}
			else if (number > secondHighest)
			{
				thirdHighest = secondHighest;
				secondHighest = number;
			}
			else if (number > thirdHighest)
			{
				thirdHighest = number;
			}

			if (number < lowest)
			{
				secondLowest = lowest;
				lowest = number;
			}
			else if (number < secondLowest)
			{
				secondLowest = number;
			}
		}

		return max(highest * secondHighest * thirdHighest, highest * lowest * secondLowest);
	}
};