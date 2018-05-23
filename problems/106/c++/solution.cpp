// 106. Construct Binary Tree from Inorder and Postorder Traversal
#include <vector>
#include <cstddef>
#include <stack>

using namespace std;

class Solution
{
	public:
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
	{
		int nodeCount = inorder.size();

		if (nodeCount == 0)
		{
			return NULL;
		}

		unordered_map<int, int> nodeIndices;
		TreeNode* root = new TreeNode(postorder[nodeCount - 1]);
		stack<TreeNode*> parents;

		for (int nodeIndex = 0; nodeIndex < nodeCount; nodeIndex++)
		{
			nodeIndices[inorder[nodeIndex]] = nodeIndex;
		}
		
		parents.push(root);
		
		for (int postorderIndex = nodeCount - 2; postorderIndex >= 0; postorderIndex--)
		{
			TreeNode* newNode = new TreeNode(postorder[postorderIndex]);
			
			if (nodeIndices[postorder[postorderIndex]] > nodeIndices[parents.top()->val])
			{
				parents.top()->right = newNode;
			}
			else
			{
				TreeNode* parent = parents.top();
				
				parents.pop();

				while (!parents.empty() && nodeIndices[postorder[postorderIndex]] < nodeIndices[parents.top()->val])
				{
					parent = parents.top();
					parents.pop();
				}
				
				parent->left = newNode;
			}
			
			parents.push(newNode);
		}

		return root;
	}
};