// 102. Binary Tree Level Order Traversal
#include <vector>
#include <cstddef>

using namespace std;

class Solution
{
	void setOrder(TreeNode* root, vector<vector<int>>& order, int level)
	{
		if (root == NULL)
		{
			return;
		}

		if (order.size() == level)
		{
			order.push_back(vector<int>());
		}

		order[level].push_back(root->val);
		level++;

		setOrder(root->left, order, level);
		setOrder(root->right, order, level);
	}

	public:
	vector<vector<int>> levelOrder(TreeNode* root)
	{
		vector<vector<int>> order;

		setOrder(root, order, 0);

		return order;
	}
};