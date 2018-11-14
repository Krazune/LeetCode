// 938. Range Sum of BST
#include <stddef.h>

int rangeSumBST(struct TreeNode* root, int L, int R)
{
	if (root == NULL)
	{
		return 0;
	}

	int value = 0;

	if (root->val >= L && root->val <= R)
	{
		value += root->val;
	}

	return value + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
}