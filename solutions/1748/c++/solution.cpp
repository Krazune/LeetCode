// 1748. Sum of Unique Elements
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	int sumOfUnique(vector<int>& nums)
	{
		unordered_map<int, int> numberOccurences;

		for (int i = 0; i < nums.size(); ++i)
		{
			++numberOccurences[nums[i]];
		}

		int sum = 0;

		for (auto it : numberOccurences)
		{
			if (it.second != 1)
			{
				continue;
			}

			sum += it.first;
		}

		return sum;
	}
};