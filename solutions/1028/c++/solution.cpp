// 1028. Recover a Tree From Preorder Traversal
#include <string>
#include <stack>
#include <cctype>

using namespace std;

class Solution
{
	public:
	TreeNode* recoverFromPreorder(string S)
	{
		stack<TreeNode*> nodes;
		TreeNode* root = NULL;
		int previousDepth = 0;

		for (int characterIndex = 0; characterIndex < S.size(); )
		{
			int newNodeDepth = 0;

			while (S[characterIndex] == '-')
			{
				++newNodeDepth;
				++characterIndex;
			}

			string newNodeValueString;

			while (isdigit(S[characterIndex]))
			{
				newNodeValueString += S[characterIndex];
				++characterIndex;
			}

			TreeNode* newNode = new TreeNode(stoi(newNodeValueString));

			if (newNodeDepth == 0)
			{
				root = newNode;
			}
			else if (newNodeDepth > previousDepth)
			{
				TreeNode* parent = nodes.top();

				parent->left = newNode;
			}
			else
			{
				for (int counter = previousDepth - newNodeDepth; counter >= 0; --counter)
				{
					nodes.pop();
				}

				TreeNode* parent = nodes.top();

				parent->right = newNode;
			}

			nodes.push(newNode);

			previousDepth = newNodeDepth;
		}

		return root;
	}
};