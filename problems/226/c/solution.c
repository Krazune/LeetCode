// 226. Invert Binary Tree
#include <stddef.h>

struct TreeNode* invertTree(struct TreeNode* root)
{
	if (root == NULL)
	{
		return NULL;
	}

	struct TreeNode* temporary = root->left;

	root->left = root->right;
	root->right = temporary;

	invertTree(root->left);
	invertTree(root->right);

	return root;
}