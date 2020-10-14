// 1614. Maximum Nesting Depth of the Parentheses
#include <string>

using namespace std;

class Solution
{
	public:
	int maxDepth(string s)
	{
		int max = 0;
		int currentDepth = 0;

		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == '(')
			{
				++currentDepth;

				if (currentDepth > max)
				{
					max = currentDepth;
				}
			}
			else if (s[i] == ')')
			{
				--currentDepth;
			}
		}

		return max;
	}
};