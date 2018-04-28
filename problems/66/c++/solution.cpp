// 66. Plus One
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> plusOne(vector<int>& digits)
	{
		vector<int> result(digits);
		int carry = 1;

		for (int index = result.size() - 1; index >= 0; index--)
		{
			int digitSum = result[index] + carry;

			if (digitSum > 9)
			{
				carry = 1;
				result[index] = 0;
			}
			else
			{
				result[index] = digitSum;

				return result;
			}
		}

		result.insert(result.begin(), 1);

		return result;
	}
};