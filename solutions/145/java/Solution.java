// 145. Binary Tree Postorder Traversal
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

class Solution
{
	public List<Integer> postorderTraversal(TreeNode root)
	{
		List<Integer> postorder = new LinkedList<>();
		Deque<TreeNode> nodesLeft = new LinkedList<>();

		nodesLeft.addFirst(root);

		while (!nodesLeft.isEmpty())
		{
			TreeNode currentNode = nodesLeft.removeFirst();

			if (currentNode == null)
			{
				continue;
			}

			postorder.add(0, currentNode.val);

			nodesLeft.addFirst(currentNode.left);
			nodesLeft.addFirst(currentNode.right);
		}

		return postorder;
	}
}
