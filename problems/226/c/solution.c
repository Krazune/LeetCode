// 226. Invert Binary Tree
#include <stdbool.h>
#include <stddef.h>

struct TreeNode* invertTree(struct TreeNode* root)
{
	if (root == NULL) return NULL;

	struct TreeNode* t = root->left;

	root->left = root->right;
	root->right = t;

	if (root->left != NULL) invertTree(root->left);
	if (root->right != NULL) invertTree(root->right);

	return root;
}
