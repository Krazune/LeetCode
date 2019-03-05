// 993. Cousins in Binary Tree
#include <queue>

using namespace std;

class Solution
{
	public:
	bool isCousins(TreeNode* root, int x, int y)
	{
		queue<TreeNode*> nodesLeft;

		nodesLeft.push(root);

		while (!nodesLeft.empty())
		{
			int parentCount = nodesLeft.size();
			int found = 0;

			for (int counter = 0; counter < parentCount; ++counter)
			{
				TreeNode* currentNode = nodesLeft.front();
				int childFound = 0;

				nodesLeft.pop();

				if (currentNode->left != nullptr)
				{
					nodesLeft.push(currentNode->left);

					if (currentNode->left->val == x || currentNode->left->val == y)
					{
						++found;
						++childFound;
					}
				}

				if (currentNode->right != nullptr)
				{
					nodesLeft.push(currentNode->right);

					if (currentNode->right->val == x || currentNode->right->val == y)
					{
						++found;
						++childFound;
					}
				}

				if (childFound == 2)
				{
					return false;
				}
			}

			if (found == 1)
			{
				return false;
			}

			if (found == 2)
			{
				return true;
			}
		}

		return false;
	}
};