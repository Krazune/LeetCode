// 111. Minimum Depth of Binary Tree
#include <algorithm>
#include <cstddef>

using namespace std;

class Solution
{
	public:
	int minDepth(TreeNode* root)
	{
		if (root == NULL)
		{
			return 0;
		}

		if (root->left == NULL)
		{
			if (root->right == NULL)
			{
				return 1;
			}
			else
			{
				return 1 + minDepth(root->right);
			}
		}
		else
		{
			if (root->right == NULL)
			{
				return 1 + minDepth(root->left);
			}
			else
			{
				return 1 + min(minDepth(root->left), minDepth(root->right));
			}
		}
	}
};