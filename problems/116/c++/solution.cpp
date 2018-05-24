// 116. Populating Next Right Pointers in Each Node
#include <cstddef>

class Solution
{
	void connectUsingParent(TreeLinkNode* root, TreeLinkNode* parent)
	{
		if (root == NULL)
		{
			return;
		}

		if (parent == NULL)
		{
			root->next = NULL;
		}
		else
		{
			if (parent->left == root)
			{
				root->next = parent->right;
			}
			else
			{
				if (parent->next != NULL)
				{
					root->next = parent->next->left;
				}
				else
				{
					root->next = NULL;
				}
			}
		}

		connectUsingParent(root->left, root);
		connectUsingParent(root->right, root);
	}

	public:
	void connect(TreeLinkNode* root)
	{
		connectUsingParent(root, NULL);
	}
};