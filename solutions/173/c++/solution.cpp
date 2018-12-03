// 173. Binary Search Tree Iterator
#include <stack>
#include <cstddef>

using namespace std;

class BSTIterator
{
	stack<TreeNode*> nodes;

	void pushNodes(TreeNode* root)
	{
		TreeNode* currentNode = root;

		while (currentNode != NULL)
		{
			nodes.push(currentNode);
			currentNode = currentNode->left;
		}
	}

	public:
	BSTIterator(TreeNode *root)
	{
		pushNodes(root);
	}

	bool hasNext()
	{
		return !nodes.empty();
	}

	int next()
	{
		TreeNode* current = nodes.top();

		nodes.pop();
		pushNodes(current->right);

		return current->val;
	}
};