// 141. Linked List Cycle
#include <stddef.h>

bool hasCycle(struct ListNode* head)
{
	if (head == NULL)
	{
		return false;
	}

	struct ListNode* slowIterator = head;
	struct ListNode* fastIterator = head->next;

	while (fastIterator != NULL && fastIterator->next != NULL)
	{
		if (slowIterator == fastIterator)
		{
			return true;
		}

		fastIterator = fastIterator->next->next;
		slowIterator = slowIterator->next;
	}

	return false;
}