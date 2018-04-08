// 814. Binary Tree Pruning
#include <cstddef>

class Solution
{
	public:
	TreeNode* pruneTree(TreeNode* root)
	{
		if (root == NULL) return NULL;
		
		root->left = pruneTree(root->left);
		root->right = pruneTree(root->right);
		
		if (root->left == NULL && root->right == NULL && root->val == 0) return NULL;
		else return root;
	}
};