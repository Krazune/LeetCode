// 589. N-ary Tree Preorder Traversal
#include <vector>
#include <cstddef>
#include <stack>

using namespace std;

class Solution
{
	public:
	vector<int> preorder(Node* root)
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

			for (int index = currentNode->children.size() - 1; index >= 0; index--)
			{
				nodes.push(currentNode->children[index]);
			}
		}

		return order;
	}
};