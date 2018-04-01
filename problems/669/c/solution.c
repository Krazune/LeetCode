// 669. Trim a Binary Search Tree
#include <cstddef>

struct TreeNode* trimBST(struct TreeNode* root, int L, int R)
{
	if (root == NULL) return NULL;
	
	if (root->val >= L)
	{
		if (root->val <= R)
		{
			root->left = trimBST(root->left, L, R);
			root->right = trimBST(root->right, L, R);
		}
		else root = trimBST(root->left, L, R);
	}
	else root = trimBST(root->right, L, R);

	return root;
}