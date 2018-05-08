// 104. Maximum Depth of Binary Tree
#include <stddef.h>

int maxDepth(struct TreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	int left = maxDepth(root->left);
	int right = maxDepth(root->right);

	if (left > right)
	{
		return 1 + left;
	}
	else
	{
		return 1 + right;
	}
}