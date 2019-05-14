// 1038. Binary Search Tree to Greater Sum Tree
#include <stack>

using namespace std;

class Solution
{
	public:
	TreeNode* bstToGst(TreeNode* root)
	{
		stack<TreeNode*> nodes;
		TreeNode* currentNode = root;
		int sum = 0;

		while (!nodes.empty() || currentNode != NULL)
		{
			if (currentNode != NULL)
			{
				nodes.push(currentNode);
				currentNode = currentNode->right;
			}
			else
			{
				currentNode = nodes.top();
				nodes.pop();

				sum += currentNode->val;
				currentNode->val = sum;

				currentNode = currentNode->left;
			}
		}

		return root;
	}
};