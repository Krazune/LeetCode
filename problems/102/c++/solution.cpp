// 102. Binary Tree Level Order Traversal
#include <vector>
#include <cstddef>

using namespace std;

class Solution
{
	void getOrder(TreeNode* root, vector<vector<int>>& order, int level)
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
		
		getOrder(root->left, order, level);
		getOrder(root->right, order, level);
	}

	public:
	vector<vector<int>> levelOrder(TreeNode* root)
	{
		vector<vector<int>> order;
		
		getOrder(root, order, 0);
		
		return order;
	}
};