// 606. Construct String from Binary Tree
#include <cstddef>
#include <string>

using namespace std;

class Solution
{
	public:
	string tree2str(TreeNode* t)
	{
		if (t == NULL)
		{
			return "";
		}

		string stringValue = to_string(t->val);

		if (t->right != NULL)
		{
			stringValue += "(" + tree2str(t->left) + ")";
			stringValue += "(" + tree2str(t->right) + ")";
		}
		else if (t->left != NULL)
		{
			stringValue += "(" + tree2str(t->left) + ")";
		}

		return stringValue;
	}
};