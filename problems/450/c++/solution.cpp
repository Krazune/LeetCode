// 450. Delete Node in a BST
#include <cstddef>

class Solution
{
	public:
	TreeNode* deleteNode(TreeNode* root, int key)
	{
		if (root == NULL)
		{
			return root;
		}

		if (root->val == key)
		{
			if (root->left == NULL)
			{
				return root->right;
			}
			else if (root->right == NULL)
			{
				return root->left;
			}
			else
			{
				TreeNode* currentNode = root->right;
				TreeNode* parentNode = NULL;

				while (currentNode->left != NULL)
				{
					parentNode = currentNode;
					currentNode = currentNode->left;
				}

				if (parentNode == NULL)
				{
					currentNode->left = root->left;

					return currentNode;
				}

				parentNode->left = currentNode->right;
				currentNode->left = root->left;
				currentNode->right = root->right;

				return currentNode;
			}
		}
		else if (root->val < key)
		{
			root->right = deleteNode(root->right, key);
		}
		else
		{
			root->left = deleteNode(root->left, key);
		}

		return root;
	}
};