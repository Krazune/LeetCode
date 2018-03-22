// 654. Maximum Binary Tree
#include <vector>

using namespace std;

class Solution
{
	public:
	TreeNode* constructMaximumBinaryTree(vector<int>& nums)
	{
		struct TreeNode* r = new TreeNode(nums[0]);

		for (int i = 1; i < nums.size(); i++)
		{
			struct TreeNode* p = NULL, *c = r, *n = NULL;
			
			while (true)
			{
				if (nums[i] > c->val)
				{
					n = new TreeNode(nums[i]);
					
					if (p == NULL)
					{
						n->left = r;
						r = n;
					}
					else
					{
						p->right = n;
						n->left = c;
					}
					
					break;
				}
				else
				{
					if (c->right == NULL)
					{
						n = new TreeNode(nums[i]);
						
						c->right = n;
						
						break;
					}

					p = c;
					c = c->right;
				}
			}
		}
		
		return r;
	}
};