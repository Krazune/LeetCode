// 654. Maximum Binary Tree
#include <vector>
#include <cstddef>

using namespace std;

class Solution
{
	public:
	TreeNode* constructMaximumBinaryTree(vector<int>& nums)
	{
		struct TreeNode* resultTree = new TreeNode(nums[0]);

		for (int index = 1; index < nums.size(); index++)
		{
			struct TreeNode* previousNode = NULL;
			struct TreeNode* currentNode = resultTree;
			struct TreeNode* nextNode = NULL;

			while (true)
			{
				if (nums[index] > currentNode->val)
				{
					nextNode = new TreeNode(nums[index]);

					if (previousNode == NULL)
					{
						nextNode->left = resultTree;
						resultTree = nextNode;
					}
					else
					{
						previousNode->right = nextNode;
						nextNode->left = currentNode;
					}

					break;
				}
				else
				{
					if (currentNode->right == NULL)
					{
						nextNode = new TreeNode(nums[index]);

						currentNode->right = nextNode;

						break;
					}

					previousNode = currentNode;
					currentNode = currentNode->right;
				}
			}
		}

		return resultTree;
	}
};