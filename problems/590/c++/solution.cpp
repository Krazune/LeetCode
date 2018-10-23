// 590. N-ary Tree Postorder Traversal
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	vector<int> postorder(Node* root)
	{
		vector<int> order;

		if (root == NULL)
		{
			return order;
		}

		stack<Node*> nodes;

		nodes.push(root);

		while (!nodes.empty())
		{
			Node* currentNode = nodes.top();

			nodes.pop();

			order.push_back(currentNode->val);

			int childrenCount = currentNode->children.size();

			for (int index = 0; index < childrenCount; index++)
			{
				nodes.push(currentNode->children[index]);
			}
		}

		reverse(order.begin(), order.end());

		return order;
	}
};