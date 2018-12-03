// 515. Find Largest Value in Each Tree Row
#include <vector>
#include <cstddef>

using namespace std;

class Solution
{
	void setLargestValues(TreeNode* root, vector<int>& values, int level)
	{
		if (root == NULL)
		{
			return;
		}

		if (values.size() == level)
		{
			values.push_back(root->val);
		}
		else if (root->val > values[level])
		{
			values[level] = root->val;
		}

		level++;

		setLargestValues(root->left, values, level);
		setLargestValues(root->right, values, level);
	}

	public:
	vector<int> largestValues(TreeNode* root)
	{
		vector<int> result;

		setLargestValues(root, result, 0);

		return result;
	}
};