// 24. Swap Nodes in Pairs
class Solution
{
	public:
	ListNode* swapPairs(ListNode* head)
	{
		if (head == nullptr)
		{
			return nullptr;
		}

		ListNode* nextNode = head->next;

		if (nextNode == nullptr)
		{
			return head;
		}

		head->next = swapPairs(nextNode->next);
		nextNode->next = head;

		return nextNode;
	}
};