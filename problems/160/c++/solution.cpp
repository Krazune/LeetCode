// 160. Intersection of Two Linked Lists
#include <cstddef>

class Solution
{
	public:
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
	{
		ListNode* iterator1 = headA;
		ListNode* iterator2 = headB;

		if (iterator1 == NULL || iterator2 == NULL)
		{
			return NULL;
		}

		while (iterator1 != iterator2)
		{
			if (iterator1 == NULL)
			{
				iterator1 = headB;
			}
			else
			{
				iterator1 = iterator1->next;
			}

			if (iterator2 == NULL)
			{
				iterator2 = headA;
			}
			else
			{
				iterator2 = iterator2->next;
			}
		}

		return iterator1;
	}
};