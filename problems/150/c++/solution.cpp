// 150. Evaluate Reverse Polish Notation
#include <string>
#include <stack>
#include <cctype>

using namespace std;

class Solution
{
	public:
	int evalRPN(vector<string>& tokens)
	{
		stack<int> numbers;
		int tokenCount = tokens.size();

		for (int tokenIndex = 0; tokenIndex < tokenCount; tokenIndex++)
		{
			string currentToken = tokens[tokenIndex];

			if (isdigit(currentToken[currentToken.size() - 1]))
			{
				numbers.push(stoi(currentToken));
			}
			else
			{
				int result = 0;
				int topOperand = numbers.top();

				numbers.pop();

				int bottomOperand = numbers.top();

				numbers.pop();

				switch (currentToken[0])
				{
					case '-':
					result = bottomOperand - topOperand;
					break;

					case '+':
					result = bottomOperand + topOperand;
					break;

					case '/':
					result = bottomOperand / topOperand;
					break;

					case '*':
					result = bottomOperand * topOperand;
					break;
				}

				numbers.push(result);
			}
		}

		return numbers.top();
	}
};