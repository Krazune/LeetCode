// 414. Third Maximum Number
#include <vector>
#include <unordered_set>
#include <climits>

using namespace std;

class Solution
{
	public:
	int thirdMax(vector<int>& nums)
	{
		int first = INT_MIN;
		int second = INT_MIN;
		int third = INT_MIN;
		unordered_set<int> uniques;

		for (int i = 0; i < nums.size(); ++i)
		{
			if (!uniques.insert(nums[i]).second)
			{
				continue;
			}

			if (nums[i] > first)
			{
				third = second;
				second = first;
				first = nums[i];
			}
			else if (nums[i] > second)
			{
				third = second;
				second = nums[i];
			}
			else if (nums[i] > third)
			{
				third = nums[i];
			}
		}

		if (uniques.size() >= 3)
		{
			return third;
		}

		return first;
	}
};