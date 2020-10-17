// 1290. Convert Binary Number in a Linked List to Integer
var getDecimalValue = function(head)
{
	let digitStack = new Array();

	for (let node = head; node != null; node = node.next)
	{
		digitStack.push(node.val);
	}

	let digitCount = digitStack.length;
	let result = 0;
	let multiplier = 1;

	for (let i = 0; i < digitCount; ++i)
	{
		if (digitStack.pop() == 1)
		{
			result += multiplier;
		}

		multiplier *= 2;
	}

	return result;
};