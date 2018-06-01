// 538. Convert BST to Greater Tree
#include <stack>
#include <cstddef>

using namespace std;

class Solution
{
	public:
	TreeNode* convertBST(TreeNode* root)
	{
		stack<TreeNode*> nodesLeft;
		TreeNode* currentNode = root;
		int sum = 0;

		while (!nodesLeft.empty() || currentNode != NULL)
		{
			if (currentNode != NULL)
			{
				nodesLeft.push(currentNode);
				currentNode = currentNode->right;
			}
			else
			{
				currentNode = nodesLeft.top();
				nodesLeft.pop();

				currentNode->val += sum;
				sum = currentNode->val;

				currentNode = currentNode->left;
			}
		}

		return root;
	}
};