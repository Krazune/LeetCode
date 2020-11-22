// 21. Merge Two Sorted Lists
class Solution
{
	public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		if (l1 == nullptr)
		{
			return l2;
		}
		else if (l2 == nullptr)
		{
			return l1;
		}

		ListNode* root = nullptr;
		ListNode* l1CurrentNode = l1;
		ListNode* l2CurrentNode = l2;

		if (l2CurrentNode->val < l1CurrentNode->val)
		{
			root = l2CurrentNode;
			l2CurrentNode = l2CurrentNode->next;
		}
		else
		{
			root = l1CurrentNode;
			l1CurrentNode = l1CurrentNode->next;
		}

		ListNode* currentNode = root;

		while (l1CurrentNode != nullptr && l2CurrentNode != nullptr)
		{
			if (l2CurrentNode->val < l1CurrentNode->val)
			{
				currentNode->next = l2CurrentNode;
				l2CurrentNode = l2CurrentNode->next;
			}
			else
			{
				currentNode->next = l1CurrentNode;
				l1CurrentNode = l1CurrentNode->next;
			}

			currentNode = currentNode->next;
		}

		if (l1CurrentNode == nullptr)
		{
			currentNode->next = l2CurrentNode;
		}
		else if (l2CurrentNode == nullptr)
		{
			currentNode->next = l1CurrentNode;
		}

		return root;
	}
};