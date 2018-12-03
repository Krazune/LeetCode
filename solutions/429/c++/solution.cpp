// 429. N-ary Tree Level Order Traversal
#include <vector>
#include <cstddef>
#include <queue>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> levelOrder(Node* root)
	{
		vector<vector<int>> order;

		if (root == NULL)
		{
			return order;
		}

		queue<Node*> nodes;

		nodes.push(root);

		while (!nodes.empty())
		{
			int levelNodeCount = nodes.size();
			vector<int> levelValues;

			for (int levelNodeIndex = 0; levelNodeIndex < levelNodeCount; levelNodeIndex++)
			{
				Node* currentNode = nodes.front();

				nodes.pop();
				levelValues.push_back(currentNode->val);

				for (Node* child : currentNode->children)
				{
					nodes.push(child);
				}
			}

			order.push_back(levelValues);
		}

		return order;
	}
};