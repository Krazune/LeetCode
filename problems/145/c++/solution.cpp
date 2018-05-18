// 145. Binary Tree Postorder Traversal
#include <vector>
#include <cstddef>
#include <stack>

using namespace std;

class Solution
{
	public:
	vector<int> postorderTraversal(TreeNode* root)
	{
		if (root == NULL)
		{
			return vector<int>(0);
		}

		vector<int> postorder;
		stack<TreeNode*> nodesLeft;
		TreeNode* previous = NULL;
		
		nodesLeft.push(root);
		
		while (!nodesLeft.empty())
		{
			TreeNode* currentNode = nodesLeft.top();
			
			if (previous == NULL || previous->left == currentNode || previous->right == currentNode)
			{
				if (currentNode->left != NULL)
				{
					nodesLeft.push(currentNode->left);
				}
				else if (currentNode->right != NULL)
				{
					nodesLeft.push(currentNode->right);
				}
				else
				{
					postorder.push_back(nodesLeft.top()->val);
					nodesLeft.pop();
				}
			}
			else if (currentNode->left == previous)
			{
				if (currentNode->right != NULL)
				{
					nodesLeft.push(currentNode->right);
				}
				else
				{
					postorder.push_back(nodesLeft.top()->val);
					nodesLeft.pop();
				}
			}
			else if (currentNode->right == previous)
			{
				postorder.push_back(nodesLeft.top()->val);
				nodesLeft.pop();
			}
			
			previous = currentNode;
		}
		
		return postorder;
	}
};