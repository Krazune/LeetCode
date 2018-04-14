// 628. Maximum Product of Three Numbers
#include <vector>
#include <algorithm>
#include <climits>

class Solution
{
	public:
	int maximumProduct(vector<int>& nums)
	{
		int h1 = INT_MIN, h2 = INT_MIN, h3 = INT_MIN, l1 = INT_MAX, l2 = INT_MAX;
		
		for (int n : nums)
		{
			if (n > h1)
			{
				h3 = h2;
				h2 = h1;
				h1 = n;
			}
			else if (n > h2)
			{
				h3 = h2;
				h2 = n;
			}
			else if (n > h3) h3 = n;
			
			if (n < l1)
			{
				l2 = l1;
				l1 = n;
			}
			else if (n < l2) l2 = n;
		}
		
		return max(h1 * h2 * h3, h1 * l1 * l2);
	}
};