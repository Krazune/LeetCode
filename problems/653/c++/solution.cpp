// 653. Two Sum IV - Input is a BST
#include <vector>
#include <stack>
#include <cstddef>

using namespace std;

class Solution
{
	public:
	bool findTarget(TreeNode* root, int k)
	{
		vector<int> inorderSums;
		stack<TreeNode*> nodesLeft;
		TreeNode* currentNode = root;

		while (!nodesLeft.empty() || currentNode != NULL)
		{
			if (currentNode != NULL)
			{
				nodesLeft.push(currentNode);
				currentNode = currentNode->left;
			}
			else
			{
				currentNode = nodesLeft.top();
				nodesLeft.pop();

				inorderSums.push_back(currentNode->val);

				currentNode = currentNode->right;
			}
		}

		int begin = 0;
		int end = inorderSums.size() - 1;

		while (begin != end)
		{
			int currentSum = inorderSums[begin] + inorderSums[end];

			if (currentSum == k)
			{
				return true;
			}
			else if (currentSum > k)
			{
				end--;
			}
			else
			{
				begin++;
			}
		}

		return false;
	}
};