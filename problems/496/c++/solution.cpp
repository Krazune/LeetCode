// 496. Next Greater Element I
#include <vector>
#include <stack>
#include <unordered_map>
#include <cstddef>

using namespace std;

class Solution
{
	public:
	vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums)
	{
		vector<int> result;
		stack<int> elementStack;
		unordered_map<int, int> greaterElements;

		for (int number : nums)
		{
			while (elementStack.size() > 0 && elementStack.top() < number)
			{
				greaterElements[elementStack.top()] = number;
				elementStack.pop();
			}

			elementStack.push(number);
		}

		for (int number : findNums)
		{
			auto greaterElement = greaterElements[number];

			if (greaterElement != NULL)
			{
				result.push_back(greaterElement);
			}
			else
			{
				result.push_back(-1);
			}
		}

		return result;
	}
};