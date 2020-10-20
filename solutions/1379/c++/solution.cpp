// 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree
class Solution
{
	public:
	TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
	{
		if (original == nullptr)
		{
			return nullptr;
		}

		if (original == target)
		{
			return cloned;
		}

		TreeNode* result = getTargetCopy(original->left, cloned->left, target);

		if (result != nullptr)
		{
			return result;
		}

		return getTargetCopy(original->right, cloned->right, target);
	}
};