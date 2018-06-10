// 98. Validate Binary Search Tree
#include <stack>
#include <climits>
#include <cstddef>

include namespace std;

class Solution
{
	public:
	bool isValidBST(TreeNode* root)
	{
		if (root == NULL)
		{
			return true;
		}

		long predecessor = LONG_MIN;
		stack<TreeNode*> nodesLeft;
		TreeNode* currentNode = root;

		while (!nodesLeft.empty() || currentNode != NULL)
		{
			if (currentNode != NULL)
			{
				nodesLeft.push(currentNode);
				currentNode = currentNode->left;
			}
			else
			{
				currentNode = nodesLeft.top();
				nodesLeft.pop();

				if (currentNode->val <= predecessor)
				{
					return false;
				}

				predecessor = currentNode->val;
				currentNode = currentNode->right;
			}
		}

		return true;
	}
};