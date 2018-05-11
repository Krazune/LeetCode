// 2. Add Two Numbers
#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* list1, struct ListNode* list2)
{
	if (list1 == NULL && list2 == NULL)
	{
		return NULL;
	}

	struct ListNode* result = malloc(sizeof(struct ListNode));
	struct ListNode* currentNode = result;
	struct ListNode* previousNode = NULL;
	struct ListNode* list1Node = list1;
	struct ListNode* list2Node = list2;
	int carry = 0;

	while (list1Node != NULL || list2Node != NULL)
	{
		int digit1 = 0;
		int digit2 = 0;
		int sum = 0;

		if (list1Node != NULL)
		{
			digit1 = list1Node->val;
			list1Node = list1Node->next;
		}

		if (list2Node != NULL)
		{
			digit2 = list2Node->val;
			list2Node = list2Node->next;
		}

		sum = digit1 + digit2 + carry;

		previousNode = currentNode;		
		currentNode->val = sum % 10;
		currentNode->next = malloc(sizeof(struct ListNode));
		currentNode = currentNode->next;
		
		carry = sum / 10;
	}

	if (carry == 1)
	{
		currentNode->val = 1;
		currentNode->next = NULL;
	}
	else
	{
		previousNode->next = NULL;
		free(currentNode);
	}

	return result;
}