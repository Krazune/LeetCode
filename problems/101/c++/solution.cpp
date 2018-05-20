// 101. Symmetric Tree
#include <cstddef>

class Solution
{
	bool allSubtreesSymmetric(struct TreeNode* first, struct TreeNode* second)
	{
		if (first == NULL)
		{
			return second == NULL;
		}
		else if (second == NULL || first->val != second->val)
		{
			return false;
		}

		return allSubtreesSymmetric(first->left, second->right) && allSubtreesSymmetric(first->right, second->left);
	}

	public:
	bool isSymmetric(TreeNode* root)
	{
		return allSubtreesSymmetric(root, root);
	}
};