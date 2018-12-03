// 155. Min Stack
#include <stack>
#include <climits>

using namespace std;

class MinStack
{
	stack<int> elements;
	stack<int> mins;

	public:
	MinStack()
	{
		mins.push(INT_MAX);
	}

	void push(int x)
	{
		elements.push(x);

		if (x <= mins.top())
		{
			mins.push(x);
		}
	}

	void pop()
	{
		if (elements.empty())
		{
			return;
		}

		if (elements.top() == mins.top())
		{
			mins.pop();
		}

		elements.pop();
	}

	int top()
	{
		return elements.empty() ? 0 : elements.top();
	}

	int getMin()
	{
		return elements.empty() ? 0 : mins.top();
	}
};