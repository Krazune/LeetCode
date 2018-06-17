// 217. Contains Duplicate
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	bool containsDuplicate(vector<int>& nums)
	{
		unordered_set<int> values;

		for (int numsIndex = 0; numsIndex < nums.size(); numsIndex++)
		{
			int previousSize = values.size();

			values.insert(nums[numsIndex]);

			if (values.size() == previousSize)
			{
				return true;
			}
		}

		return false;
	}
};