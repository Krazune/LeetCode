// 83. Remove Duplicates from Sorted List
#include <stdlib.h>

struct ListNode* deleteDuplicates(struct ListNode* head)
{
	if (head == NULL)
	{
		return head;
	}

	struct ListNode* currentNode = head->next;
	struct ListNode* lastNode = head;

	while (currentNode != NULL)
	{
		if (currentNode->val == lastNode->val)
		{
			struct ListNode* temporary = currentNode;

			currentNode = currentNode->next;
			free(temporary);
		}
		else
		{
			lastNode->next = currentNode;
			lastNode = currentNode;
			currentNode = currentNode->next;
		}
	}

	lastNode->next = NULL;

	return head;
}