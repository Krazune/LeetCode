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
		
		int currentSum = sum - root->val;

		if (root->left == NULL && root->right == NULL)
		{
			return currentSum == 0;
		}

		return hasPathSum(root->left, currentSum) || hasPathSum(root->right, currentSum);
	}
};