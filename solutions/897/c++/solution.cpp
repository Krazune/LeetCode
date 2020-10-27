// 897. Increasing Order Search Tree
#include <stack>

using namespace std;

class Solution
{
	public:
	TreeNode* increasingBST(TreeNode* root)
	{
		TreeNode* resultTree = nullptr;
		TreeNode* currentResultNode = nullptr;

		stack<TreeNode*> nodeStack;
		TreeNode* currentNode = root;

		while (currentNode != nullptr || !nodeStack.empty())
		{
			while (currentNode != nullptr)
			{
				nodeStack.push(currentNode);
				currentNode = currentNode->left;
			}

			currentNode = nodeStack.top();

			nodeStack.pop();

			TreeNode* newNode = new TreeNode(currentNode->val);

			if (resultTree == nullptr)
			{
				resultTree = newNode;
			}
			else
			{
				currentResultNode->right = newNode;
			}

			currentResultNode = newNode;

			currentNode = currentNode->right;
		}

		return resultTree;
	}
};