// 1609. Even Odd Tree
#include <vector>
#include <queue>

using namespace std;

class Solution
{
	public:
	bool isEvenOddTree(TreeNode* root)
	{
		vector<int> levelCount;
		queue<TreeNode*> nodes;
		int currentLevel = 0;

		nodes.push(root);

		while (!nodes.empty())
		{
			int levelNodeCount = nodes.size();
			int previousValue = (currentLevel % 2 == 0) ? 0 : 1000001;

			for (int levelNodeIndex = 0; levelNodeIndex < levelNodeCount; levelNodeIndex++)
			{
				TreeNode* currentNode = nodes.front();

				if (currentLevel % 2 == 0)
				{
					if (currentNode->val <= previousValue || currentNode->val % 2 == 0)
					{
						return false;
					}
				}
				else
				{
					if (currentNode->val >= previousValue || currentNode->val % 2 != 0)
					{
						return false;
					}
				}

				previousValue = currentNode->val;

				nodes.pop();

				if (currentNode->left != NULL)
				{
					nodes.push(currentNode->left);
				}

				if (currentNode->right != NULL)
				{
					nodes.push(currentNode->right);
				}
			}

			++currentLevel;
		}

		return true;
	}
};