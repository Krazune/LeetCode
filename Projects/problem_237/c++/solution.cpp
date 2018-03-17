// 237. Delete Node in a Linked List
class Solution
{
	public:
	void deleteNode(ListNode* node)
	{
		if (node == NULL || node->next == NULL) return;
		
		ListNode* n = node->next->next;
		
		node->val = node->next->val;
		delete node->next;
		node->next = n;
	}
};