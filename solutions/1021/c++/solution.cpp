// 1021. Remove Outermost Parentheses
#include <string>

using namespace std;

class Solution
{
	public:
	string removeOuterParentheses(string S)
	{
		string result;
		int level = 0;

		for (int index = 0; index < S.size(); ++index)
		{
			if (S[index] == '(')
			{
				++level;

				if (level != 1)
				{
					result += S[index];
				}
			}
			else
			{
				--level;

				if (level != 0)
				{
					result += S[index];
				}
			}
		}

		return result;
	}
};