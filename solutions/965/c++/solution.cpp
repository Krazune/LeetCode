// 965. Univalued Binary Tree
#include <queue>

using namespace std;

class Solution
{
	public:
	bool isUnivalTree(TreeNode* root)
	{
		int value = root->val;
		queue<TreeNode*> nodes;

		nodes.push(root);

		do
		{
			TreeNode* currentNode = nodes.front();

			nodes.pop();

			if (currentNode->val != value)
			{
				return false;
			}

			if (currentNode->left != NULL)
			{
				nodes.push(currentNode->left);
			}

			if (currentNode->right != NULL)
			{
				nodes.push(currentNode->right);
			}
		}
		while (!nodes.empty());

		return true;
	}
};