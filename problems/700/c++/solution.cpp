// 700. Search in a Binary Search Tree
#include <cstddef>

class Solution
{
	public:
	TreeNode* searchBST(TreeNode* root, int val)
	{
		TreeNode* currentNode = root;

		while (currentNode != NULL)
		{
			if (currentNode->val == val)
			{
				return currentNode;
			}
			else if (currentNode->val > val)
			{
				currentNode = currentNode->left;
			}
			else
			{
				currentNode = currentNode->right;
			}
		}

		return NULL;
	}
};