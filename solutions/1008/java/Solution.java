// 1008. Construct Binary Search Tree from Preorder Traversal
class Solution
{
	public TreeNode bstFromPreorder(int[] preorder)
	{
		TreeNode root = new TreeNode(preorder[0]);

		for (int valueIndex = 1; valueIndex < preorder.length; ++valueIndex)
		{
			TreeNode currentNode = root;
			int currentValue = preorder[valueIndex];

			while (true)
			{
				if (currentValue > currentNode.val)
				{
					if (currentNode.right == null)
					{
						currentNode.right = new TreeNode(currentValue);
						break;
					}

					currentNode = currentNode.right;
				}
				else
				{
					if (currentNode.left == null)
					{
						currentNode.left = new TreeNode(currentValue);
						break;
					}

					currentNode = currentNode.left;
				}
			}
		}

		return root;
	}
}