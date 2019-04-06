// 430. Flatten a Multilevel Doubly Linked List
import java.util.deque;
import java.util.linkedlist;

class Solution
{
	public Node flatten(Node head)
	{
		Deque<Node> upperLists = new LinkedList<Node>();
		Node currentNode = head;

		while (currentNode != null)
		{
			if (currentNode.child != null)
			{
				if (currentNode.next != null)
				{
					upperLists.addFirst(currentNode.next);
				}

				currentNode.next = currentNode.child;
				currentNode.child = null;
				currentNode.next.prev = currentNode;
			}
			else if (currentNode.next == null && !upperLists.isEmpty())
			{
				currentNode.next = upperLists.removeFirst();
				currentNode.next.prev = currentNode;
			}

			currentNode = currentNode.next;
		}

		return head;
	}
}