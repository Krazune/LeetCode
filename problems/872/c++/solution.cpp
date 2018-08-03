// 872. Leaf-Similar Trees
#include <cstddef>
#include <stack>
#include <vector>

using namespace std;

class Solution
{
	public:
	bool leafSimilar(TreeNode* root1, TreeNode* root2)
	{
		stack<TreeNode*> nodeStack1;
		vector<int> leafValues1;

		nodeStack1.push(root1);

		while (!nodeStack1.empty())
		{
			TreeNode* currentNode = nodeStack1.top();

			nodeStack1.pop();

			if (currentNode->left != NULL)
			{
				nodeStack1.push(currentNode->left);

				if (currentNode->right != NULL)
				{
					nodeStack1.push(currentNode->right);
				}
			}
			else
			{
				if (currentNode->right != NULL)
				{
					nodeStack1.push(currentNode->right);
				}
				else
				{
					leafValues1.push_back(currentNode->val);
				}
			}
		}

		stack<TreeNode*> nodeStack2;
		vector<int> leafValues2;

		nodeStack2.push(root2);

		while (!nodeStack2.empty())
		{
			TreeNode* currentNode = nodeStack2.top();

			nodeStack2.pop();

			if (currentNode->left != NULL)
			{
				nodeStack2.push(currentNode->left);

				if (currentNode->right != NULL)
				{
					nodeStack2.push(currentNode->right);
				}
			}
			else
			{
				if (currentNode->right != NULL)
				{
					nodeStack2.push(currentNode->right);
				}
				else
				{
					leafValues2.push_back(currentNode->val);
				}
			}
		}

		if (leafValues1.size() != leafValues2.size())
		{
			return false;
		}

		for (int leafIndex = 0; leafIndex < leafValues1.size(); leafIndex++)
		{
			if (leafValues1[leafIndex] != leafValues2[leafIndex])
			{
				return false;
			}
		}

		return true;
	}
};