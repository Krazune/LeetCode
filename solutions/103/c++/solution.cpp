// 103. Binary Tree Zigzag Level Order Traversal
#include <vector>
#include <cstddef>
#include <queue>

using namespace std;

class Solution
{
	public:
	vector<vector<int>> zigzagLevelOrder(TreeNode* root)
	{
		vector<vector<int>> order;

		if (root == NULL)
		{
			return order;
		}

		queue<TreeNode*> nodes;

		nodes.push(root);

		bool leftFirst = true;

		while (!nodes.empty())
		{
			int levelNodeCount = nodes.size();
			vector<int> levelValues;

			for (int levelNodeIndex = 0; levelNodeIndex < levelNodeCount; levelNodeIndex++)
			{
				TreeNode* currentNode = nodes.front();

				nodes.pop();

				if (leftFirst)
				{
					levelValues.push_back(currentNode->val);
				}
				else
				{
					levelValues.insert(levelValues.begin(), currentNode->val);
				}

				if (currentNode->left != NULL)
				{
					nodes.push(currentNode->left);
				}

				if (currentNode->right != NULL)
				{
					nodes.push(currentNode->right);
				}
			}

			order.push_back(levelValues);
			leftFirst = !leftFirst;
		}

		return order;
	}
};