// 1646. Get Maximum in Generated Array
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
		public:
		int getMaximumGenerated(int n)
		{
				if (n == 0)
				{
						return 0;
				}

				if (n == 1)
				{
						return 1;
				}

				vector<int> nums(n + 1, 0);

				nums[0] = 0;
				nums[1] = 1;

				int maxNum = 1;

				for (int i = 1; 2 * i < nums.size() - 1; ++i)
				{
						nums[2 * i] = nums[i];
						nums[2 * i + 1] = nums[i] + nums[i + 1];

						maxNum = max(maxNum, max(nums[2 * i], nums[2 * i + 1]));
				}

				return maxNum;
		}
};