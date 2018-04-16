// 169. Majority Element
#include <vector>

using namespace std;

class Solution
{
	public:
	int majorityElement(vector<int>& nums)
	{
		int c = 0, r = 0;
		
		for (int i : nums)
		{
			if (c == 0) r = i;
			
			if (i == r) c++;
			else c--;
		}
		
		return r;
	}
};