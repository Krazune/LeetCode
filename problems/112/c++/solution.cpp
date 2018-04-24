// 112. Path Sum
#include <cstddef>

class Solution
{
	public:
	bool hasPathSum(TreeNode* root, int sum)
	{
		if (root == NULL)
		{
			return false;
		}
		
		int s = sum - root->val;

		if (root->left == NULL && root->right == NULL)
		{
			return s == 0;
		}

		return hasPathSum(root->left, s) || hasPathSum(root->right, s);
	}
};