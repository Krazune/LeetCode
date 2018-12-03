// 117. Populating Next Right Pointers in Each Node II
#include <stddef.h>

void connect(TreeLinkNode* root)
{
	TreeLinkNode* currentNode = root;
	TreeLinkNode* firstChildNode = NULL;
	TreeLinkNode* currentChildNode = NULL;

	while (currentNode != NULL)
	{
		if (currentNode->left != NULL)
		{
			if (currentChildNode == NULL)
			{
				firstChildNode = currentNode->left;
				currentChildNode = currentNode->left;
			}
			else
			{
				currentChildNode->next = currentNode->left;
				currentChildNode = currentChildNode->next;
			}
		}

		if (currentNode->right != NULL)
		{
			if (currentChildNode == NULL)
			{
				firstChildNode = currentNode->right;
				currentChildNode = currentNode->right;
			}
			else
			{
				currentChildNode->next = currentNode->right;
				currentChildNode = currentChildNode->next;
			}
		}

		if (currentNode->next == NULL)
		{
			currentNode = firstChildNode;
			firstChildNode = NULL;
			currentChildNode = NULL;
		}
		else
		{
			currentNode = currentNode->next;
		}
	}
}