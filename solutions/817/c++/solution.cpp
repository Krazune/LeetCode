// 817. Linked List Components
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	int numComponents(ListNode* head, vector<int>& G)
	{
		unordered_set<int> gValues(G.begin(), G.end());
		int connectedCount = 0;
		bool previousInG = false;

		for (ListNode* currentNode = head; currentNode != nullptr; currentNode = currentNode->next)
		{
			if (gValues.find(currentNode->val) != gValues.end())
			{
				previousInG = true;
			}
			else if (previousInG)
			{
				connectedCount++;
				previousInG = false;
			}
		}

		if (previousInG)
		{
			connectedCount++;
		}

		return connectedCount;
	}
};