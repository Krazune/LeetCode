// 232. Implement Queue using Stacks
#include <stack>

using namespace std;

class MyQueue
{
	stack<int> myQueue;

	public:
	MyQueue() { }

	void push(int x)
	{
		stack<int> temporaryStack;

		while (!myQueue.empty())
		{
			temporaryStack.push(myQueue.top());
			myQueue.pop();
		}

		myQueue.push(x);

		while (!temporaryStack.empty())
		{
			myQueue.push(temporaryStack.top());
			temporaryStack.pop();
		}
	}

	int pop()
	{
		int top = peek();

		myQueue.pop();

		return top;
	}

	int peek()
	{
		return myQueue.top();
	}

	bool empty()
	{
		return myQueue.empty();
	}
};