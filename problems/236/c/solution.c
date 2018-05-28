// 236. Lowest Common Ancestor of a Binary Tree
#include <stddef.h>

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q)
{
	if (root == NULL || p == root || q == root)
	{
		return root;
	}

	struct TreeNode* leftLowestCommonAncestor = lowestCommonAncestor(root->left, p, q);
	struct TreeNode* rightLowestCommonAncestor = lowestCommonAncestor(root->right, p, q);

	if (leftLowestCommonAncestor != NULL && rightLowestCommonAncestor != NULL)
	{
		return root;
	}

	return leftLowestCommonAncestor != NULL ? leftLowestCommonAncestor : rightLowestCommonAncestor;
}