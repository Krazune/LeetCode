// 442. Find All Duplicates in an Array
#include <vector>
#include <cstdlib>

using namespace std;

class Solution
{
	public:
	vector<int> findDuplicates(vector<int>& nums)
	{
		vector<int> duplicates;

		for (int index = 0; index < nums.size(); index++)
		{
			int absoluteIndex = abs(nums[index]) - 1;

			if (nums[absoluteIndex] < 0)
			{
				duplicates.push_back(absoluteIndex + 1);
			}
			else
			{
				nums[absoluteIndex] = -nums[absoluteIndex];
			}
		}

		return duplicates;
	}
};