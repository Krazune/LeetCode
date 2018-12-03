// 116. Populating Next Right Pointers in Each Node
#include <cstddef>

class Solution
{
	public:
	void connect(TreeLinkNode* root)
	{
		if (root == NULL)
		{
			return;
		}

		TreeLinkNode* firstLevelNode = root;
		TreeLinkNode* currentNode = NULL;

		while (firstLevelNode->left != NULL)
		{
			currentNode = firstLevelNode;

			while (currentNode != NULL)
			{
				currentNode->left->next = currentNode->right;

				if (currentNode->next != NULL)
				{
					currentNode->right->next = currentNode->next->left;
				}

				currentNode = currentNode->next;
			}

			firstLevelNode = firstLevelNode->left;
		}
	}
};