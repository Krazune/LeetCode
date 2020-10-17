// 1290. Convert Binary Number in a Linked List to Integer
var getDecimalValue = function(head)
{
	let result = head.val;
	let node = head.next;

	while (node != null)
	{
		result *= 2;
		result += node.val;
		node = node.next;
	}

	return result;
};