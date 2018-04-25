// 442. Find All Duplicates in an Array
#include <vector>
#include <cstdlib>

using namespace std;

class Solution
{
	public:
	vector<int> findDuplicates(vector<int>& nums)
	{
		vector<int> r;
		
		for (int i = 0; i < nums.size(); i++)
		{
			int a = abs(nums[i]), j = a - 1;
			
			if (nums[j] < 0) r.push_back(a);
			else nums[j] = -nums[j];
		}
		
		return r;
	}
};