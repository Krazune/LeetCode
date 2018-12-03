// 20. Valid Parentheses
#include <string>
#include <stack>

using namespace std;

class Solution
{
	public:
	bool isValid(string symbols)
	{
		if (symbols.size() == 0)
		{
			return true;
		}

		if (symbols.size() % 2 != 0)
		{
			return false;
		}

		stack<char> symbolNests;

		for (char symbol : symbols)
		{
			switch (symbol)
			{
				case '(':
				symbolNests.push(')');
				break;

				case '[':
				symbolNests.push(']');
				break;

				case '{':
				symbolNests.push('}');
				break;

				default:
				if (symbolNests.size() == 0 || symbolNests.top() != symbol)
				{
					return false;
				}

				symbolNests.pop();
				break;
			}
		}

		return symbolNests.size() == 0;
	}
};