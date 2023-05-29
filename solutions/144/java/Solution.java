// 144. Binary Tree Preorder Traversal
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

public class Application
{
	public List<Integer> preorderTraversal(TreeNode root)
	{
		List<Integer> preorder = new LinkedList<>();
		Deque<TreeNode> nodes = new LinkedList<>();

		nodes.addFirst(root);

		while (!nodes.isEmpty())
		{
			TreeNode currentNode = nodes.removeFirst();

			if (currentNode == null)
			{
				continue;
			}

			preorder.add(currentNode.val);

			nodes.addFirst(currentNode.right);
			nodes.addFirst(currentNode.left);
		}

		return preorder;
	}
}
