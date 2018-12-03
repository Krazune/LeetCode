// 404. Sum of Left Leaves
#include <stddef.h>

int sumOfLeftLeaves(struct TreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	if (root->left != NULL && root->left->left == NULL && root->left->right == NULL)
	{
		return root->left->val + sumOfLeftLeaves(root->right);
	}
	else
	{
		return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
	}
}