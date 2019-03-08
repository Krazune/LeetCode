// 257. Binary Tree Paths
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution
{
	public:
	vector<string> binaryTreePaths(TreeNode* root)
	{
		vector<string> paths;

		if (root == nullptr)
		{
			return paths;
		}

		stack<TreeNode*> nodes;
		stack<string> pathStrings;

		nodes.push(root);
		pathStrings.push(to_string(root->val));

		while (!nodes.empty())
		{
			TreeNode* currentNode = nodes.top();
			string currentPathString = pathStrings.top();

			nodes.pop();
			pathStrings.pop();

			bool hasChild = false;

			if (currentNode->left != nullptr)
			{
				nodes.push(currentNode->left);
				pathStrings.push(currentPathString + "->" + to_string(currentNode->left->val));
				hasChild = true;
			}

			if (currentNode->right != nullptr)
			{
				nodes.push(currentNode->right);
				pathStrings.push(currentPathString + "->" + to_string(currentNode->right->val));
				hasChild = true;
			}

			if (!hasChild)
			{
				paths.push_back(currentPathString);
			}
		}

		return paths;
	}
};