// 2. Add Two Numbers
#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* list1, struct ListNode* list2)
{
	if (list1 == NULL && list2 == NULL) return NULL;
	
	struct ListNode* r = malloc(sizeof(struct ListNode)), *n = r, *b = NULL, *l1 = list1, *l2 = list2;
	int c = 0;
	
	while (l1 != NULL || l2 != NULL)
	{
		int d1 = 0, d2 = 0, s = 0;
		
		if (l1 != NULL)
		{
			d1 = l1->val;
			l1 = l1->next;
		}
		
		if (l2 != NULL)
		{
			d2 = l2->val;
			l2 = l2->next;
		}
		
		b = n;
		s = (d1 + d2) % 10;
		n->val = (s + c) % 10;
		n->next = malloc(sizeof(struct ListNode));
		n = n->next;
		c = (d1 + d2 + c > 9) ? 1 : 0;
	}
	
	if (c > 0)
	{
		n->val = 1;
		n->next = NULL;
	}
	else
	{
		b->next = NULL;
		free(n);
	}
	
	return r;
}