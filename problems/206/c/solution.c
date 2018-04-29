// 206. Reverse Linked List
#include <stddef.h>

struct ListNode* reverseList(struct ListNode* head)
{
	struct ListNode* previous = NULL;
	int *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		head->next = previous;
		previous = head;
		head = next;
	}

	return previous;
}