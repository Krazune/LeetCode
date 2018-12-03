// 144. Binary Tree Preorder Traversal
#include <vector>
#include <cstddef>
#include <stack>

using namespace std;

class Solution
{
	public:
	vector<int> preorderTraversal(TreeNode* root)
	{
		vector<int> preorder;
		stack<TreeNode*> nodes;

		if (root == NULL)
		{
			return preorder;
		}
		
		nodes.push(root);
		
		while (!nodes.empty())
		{
			TreeNode* currentNode = nodes.top();
			
			nodes.pop();
			
			preorder.push_back(currentNode->val);
			
			if (currentNode->right != NULL)
			{
				nodes.push(currentNode->right);
			}
			
			if (currentNode->left != NULL)
			{
				nodes.push(currentNode->left);
			}
		}
		
		return preorder;
	}
};