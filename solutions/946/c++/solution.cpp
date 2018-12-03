// 946. Validate Stack Sequences
#include <vector>
#include <stack>

using namespace std;

class Solution
{
	public:
	bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
	{
		stack<int> validStack;
		int valueCount = pushed.size();
		int poppedIndex = 0;

		for (int pushedIndex = 0; pushedIndex < valueCount; ++pushedIndex)
		{
			validStack.push(pushed[pushedIndex]);

			while (!validStack.empty())
			{
				if (validStack.top() != popped[poppedIndex])
				{
					break;
				}

				validStack.pop();
				++poppedIndex;
			}
		}

		return validStack.empty();
	}
};