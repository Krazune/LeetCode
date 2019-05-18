// 951. Flip Equivalent Binary Trees
#include <stack>

using namespace std;

class Solution
{
	public:
	bool flipEquiv(TreeNode* root1, TreeNode* root2)
	{
		if (root1 == NULL)
		{
			if (root2 == NULL)
			{
				return true;
			}

			return false;
		}

		if (root2 == NULL)
		{
			return false;
		}

		stack<TreeNode*> nodes1;
		stack<TreeNode*> nodes2;

		nodes1.push(root1);
		nodes2.push(root2);

		while (!nodes1.empty())
		{
			TreeNode* currentNode1 = nodes1.top();
			TreeNode* currentNode2 = nodes2.top();

			nodes1.pop();
			nodes2.pop();

			int left1 = -1;
			int right1 = -1;

			int left2 = -1;
			int right2 = -1;

			if (currentNode1->left != NULL)
			{
				left1 = currentNode1->left->val;
			}

			if (currentNode1->right != NULL)
			{
				right1 = currentNode1->right->val;
			}

			if (currentNode2->left != NULL)
			{
				left2 = currentNode2->left->val;
			}

			if (currentNode2->right != NULL)
			{
				right2 = currentNode2->right->val;
			}

			if (left1 == left2)
			{
				if (right1 != right2)
				{
					return false;
				}

				if (left1 != -1)
				{
					nodes1.push(currentNode1->left);
					nodes2.push(currentNode2->left);
				}

				if (right1 != -1)
				{
					nodes1.push(currentNode1->right);
					nodes2.push(currentNode2->right);
				}
			}
			else if (left1 == right2)
			{
				if (right1 != left2)
				{
					return false;
				}

				if (left1 != -1)
				{
					nodes1.push(currentNode1->left);
					nodes2.push(currentNode2->right);
				}

				if (right1 != -1)
				{
					nodes1.push(currentNode1->right);
					nodes2.push(currentNode2->left);
				}
			}
			else
			{
				return false;
			}
		}

		return true;
	}
};