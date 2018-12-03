// 876. Middle of the Linked List
#include <stddef>

struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* fastNode = head;
	struct ListNode* slowNode = head;

	while (fastNode != NULL)
	{
		fastNode = fastNode->next;

		if (fastNode == NULL)
		{
			return slowNode;
		}

		slowNode = slowNode->next;
		fastNode = fastNode->next;
	}

	return slowNode;
}