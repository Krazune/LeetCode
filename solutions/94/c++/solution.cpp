// 94. Binary Tree Inorder Traversal
#include <vector>
#include <cstddef>
#include <stack>

using namespace std;

class Solution
{
	public:
	vector<int> inorderTraversal(TreeNode* root)
	{
		vector<int> inorder;
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
				inorder.push_back(currentNode->val);
				currentNode = currentNode->right;
			}
		}

		return inorder;
	}
};