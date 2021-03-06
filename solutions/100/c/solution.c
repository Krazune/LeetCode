// 100. Same Tree
#include <stddef.h>
#include <stdbool.h>

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	if (p == q)
	{
		return true;
	}

	if (p == NULL || q == NULL || p->val != q->val)
	{
		return false;
	}

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}