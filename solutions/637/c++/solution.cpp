// 637. Average of Levels in Binary Tree
#include <vector>
#include <cstddef>
#include <queue>

using namespace std;

class Solution
{
	public:
	vector<double> averageOfLevels(TreeNode* root)
	{
		vector<double> averages;

		if (root == NULL)
		{
			return averages;
		}

		queue<TreeNode*> nodes;

		nodes.push(root);

		while (!nodes.empty())
		{
			int levelNodeCount = nodes.size();
			long valuesTotal = 0;

			for (int levelNodeIndex = 0; levelNodeIndex < levelNodeCount; levelNodeIndex++)
			{
				TreeNode* currentNode = nodes.front();

				nodes.pop();
				valuesTotal += currentNode->val;

				if (currentNode->left != NULL)
				{
					nodes.push(currentNode->left);
				}

				if (currentNode->right != NULL)
				{
					nodes.push(currentNode->right);
				}
			}

			averages.push_back((double)valuesTotal / (double)levelNodeCount);
		}

		return averages;
	}
};