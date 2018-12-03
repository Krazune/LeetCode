// 701. Insert into a Binary Search Tree
#include <stddef.h>

struct TreeNode* insertIntoBST(struct TreeNode* root, int val)
{
	if (root == NULL)
	{
		struct TreeNode* newNode = malloc(sizeof(struct TreeNode));

		newNode->val = val;
		newNode->left = NULL;
		newNode->right = NULL;

		return newNode;
	}

	if (root->val > val)
	{
		root->left = insertIntoBST(root->left, val);
	}
	else
	{
		root->right = insertIntoBST(root->right, val);
	}

	return root;
}