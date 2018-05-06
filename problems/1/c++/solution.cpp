// 1. Two Sum
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	vector<int> twoSum(const vector<int>& numbers, int target)
	{
		unordered_map<int, int> differences;

		for (int index = 0; index < numbers.size(); index++)
		{
			auto found = differences.find(target - numbers[index]);

			if (found != differences.end() && found->second != index)
			{
				return vector<int> {index, found->second};
			}

			differences.insert({numbers[index], index});
		}
	}
};