// 2. Add Two Numbers
#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* list1, struct ListNode* list2)
{
	if (list1 == NULL && list2 == NULL) return NULL;
	
	struct ListNode* r = malloc(sizeof(struct ListNode)), *n = r, *p = NULL, *l1 = list1, *l2 = list2;
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
		
		p = n;
		s = d1 + d2 + c;
		n->val = s % 10;
		n->next = malloc(sizeof(struct ListNode));
		n = n->next;
		c = s / 10;
	}
	
	if (c == 1)
	{
		n->val = 1;
		n->next = NULL;
	}
	else
	{
		p->next = NULL;
		free(n);
	}
	
	return r;
}