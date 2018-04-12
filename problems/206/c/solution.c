// 206. Reverse Linked List
#include <stddef.h>

struct ListNode* reverseList(struct ListNode* head)
{
	struct ListNode* p = NULL, *n = NULL;
	
	while (head != NULL)
	{
		n = head->next;
		head->next = p;
		p = head;
		head = n;
	}
	
	return p;
}