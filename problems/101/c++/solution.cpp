// 101. Symmetric Tree
class Solution
{
	bool allSubtreesSymmetric(struct TreeNode* first, struct TreeNode* second)
	{
		if (first == NULL && second == NULL)
		{
			return true;
		}

		if (first == NULL || second == NULL || first->val != second->val)
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