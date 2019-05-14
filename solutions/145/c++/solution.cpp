// 145. Binary Tree Postorder Traversal
#include <vector>
#include <stack>

using namespace std;

class Solution
{
	public:
	vector<int> postorderTraversal(TreeNode* root)
	{
		vector<int> postorderValues;

		if (root == NULL)
		{
			return postorderValues;
		}

		stack<TreeNode*> nodes;
		TreeNode* previousNode = NULL;

		nodes.push(root);

		while (!nodes.empty())
		{
			TreeNode* currentNode = nodes.top();

			if (previousNode != NULL && (currentNode->left == previousNode || currentNode->right == previousNode) || previousNode == currentNode)
			{
				postorderValues.push_back(currentNode->val);
				nodes.pop();
			}
			else
			{
				if (currentNode->right != NULL)
				{
					nodes.push(currentNode->right);
				}

				if (currentNode->left != NULL)
				{
					nodes.push(currentNode->left);
				}
			}

			previousNode = currentNode;
		}

		return postorderValues;
	}
};