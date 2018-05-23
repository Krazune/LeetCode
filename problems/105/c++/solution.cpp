// 105. Construct Binary Tree from Preorder and Inorder Traversal
#include <vector>
#include <cstddef>
#include <stack>

using namespace std;

class Solution
{
	public:
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
	{
		int nodeCount = inorder.size();

		if (nodeCount == 0)
		{
			return NULL;
		}

		unordered_map<int, int> nodeIndices;
		TreeNode* root = new TreeNode(preorder[0]);
		stack<TreeNode*> parents;

		for (int nodeIndex = 0; nodeIndex < nodeCount; nodeIndex++)
		{
			nodeIndices[inorder[nodeIndex]] = nodeIndex;
		}

		parents.push(root);

		for (int preorderIndex = 1; preorderIndex < nodeCount; preorderIndex++)
		{
			TreeNode* newNode = new TreeNode(preorder[preorderIndex]);
			
			if (nodeIndices[preorder[preorderIndex]] < nodeIndices[parents.top()->val])
			{
				parents.top()->left = newNode;
			}
			else
			{
				TreeNode* parent = parents.top();

				parents.pop();

				while (!parents.empty() && nodeIndices[preorder[preorderIndex]] > nodeIndices[parents.top()->val])
				{
					parent = parents.top();
					parents.pop();
				}
				
				parent->right = newNode;
			}
			
			parents.push(newNode);
		}

		return root;
	}
};