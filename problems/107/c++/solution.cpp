// 107. Binary Tree Level Order Traversal II
#include <vector>
#include <cstddef>
#include <queue>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> levelOrderBottom(TreeNode* root)
	{
		vector<vector<int>> order;

		if (root == NULL)
		{
			return order;
		}

		queue<TreeNode*> nodes;

		nodes.push(root);

		while (!nodes.empty())
		{
			int levelNodeCount = nodes.size();
			vector<int> levelValues;

			for (int levelNodeIndex = 0; levelNodeIndex < levelNodeCount; levelNodeIndex++)
			{
				TreeNode* currentNode = nodes.front();

				nodes.pop();
				levelValues.push_back(currentNode->val);

				if (currentNode->left != NULL)
				{
					nodes.push(currentNode->left);
				}

				if (currentNode->right != NULL)
				{
					nodes.push(currentNode->right);
				}
			}

			order.insert(order.begin(), levelValues);
		}

		return order;
	}
};