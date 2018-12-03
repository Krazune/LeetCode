// 225. Implement Stack using Queues
#include <queue>

using namespace std;

class MyStack
{
	queue<int> myStack;

	public:
	MyStack() { }

	void push(int x)
	{
		queue<int> temporaryQueue;

		while (!myStack.empty())
		{
			temporaryQueue.push(myStack.front());
			myStack.pop();
		}

		myStack.push(x);

		while (!temporaryQueue.empty())
		{
			myStack.push(temporaryQueue.front());
			temporaryQueue.pop();
		}
	}

	int pop()
	{
		int topValue = top();

		myStack.pop();

		return topValue;
	}

	int top()
	{
		return myStack.front();
	}

	bool empty()
	{
		return myStack.empty();
	}
};