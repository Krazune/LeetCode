// 226. Invert Binary Tree
#include <cstddef>

class Solution
{
	public:
	TreeNode* invertTree(TreeNode* root)
	{
		if (root == NULL)
		{
			return NULL;
		}

		TreeNode* temporary = root->left;

		root->left = root->right;
		root->right = temporary;

		invertTree(root->left);
		invertTree(root->right);

		return root;
	}
};