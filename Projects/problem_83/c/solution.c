// 83. Remove Duplicates from Sorted List
#include <stdlib.h>

struct ListNode* deleteDuplicates(struct ListNode* head)
{
	if (head == NULL)  return head;

	struct ListNode *c = head->next;
	struct ListNode *u = head;
	
	while (c != NULL)
	{
		if (c->val == u->val)
		{
			struct ListNode *t = c;
			
			c = c->next;
			free(t);
		}
		else
		{
			u->next = c;
			u = c;
			c = c->next;
		}
	}
	
	u->next = NULL;
	
	return head;
}