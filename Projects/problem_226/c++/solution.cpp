// 226. Invert Binary Tree
#include <cstddef>

class Solution
{
	public:
	TreeNode* invertTree(TreeNode* root)
	{
		if (root == NULL) return NULL;

		TreeNode* t = root->left;

		root->left = root->right;
		root->right = t;

		if (root->left != NULL) invertTree(root->left);
		if (root->right != NULL) invertTree(root->right);

		return root;
	}
};
