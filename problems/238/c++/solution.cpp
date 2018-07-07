// 238. Product of Array Except Self
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> productExceptSelf(vector<int>& nums)
	{
		int numsSize = nums.size();
		vector<int> result(numsSize);
		int temporaryProduct = 1;

		for (int index = 0; index < numsSize; index++)
		{
			result[index] = temporaryProduct;
			temporaryProduct *= nums[index];
		}

		temporaryProduct = 1;

		for (int index = numsSize - 1; index >= 0; index--)
		{
			result[index] *= temporaryProduct;
			temporaryProduct *= nums[index];
		}

		return result;
	}
};