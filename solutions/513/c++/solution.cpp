// 513. Find Bottom Left Tree Value
#include <queue>
#include <cstddef>

using namespace std;

class Solution
{
	public:
	int findBottomLeftValue(TreeNode* root)
	{
		queue<TreeNode*> nodes;
		int result;

		nodes.push(root);

		while (!nodes.empty())
		{
			TreeNode* currentNode = nodes.front();

			nodes.pop();
			result = currentNode->val;

			if (currentNode->right != NULL)
			{
				nodes.push(currentNode->right);
			}

			if (currentNode->left != NULL)
			{
				nodes.push(currentNode->left);
			}
		}

		return result;
	}
};