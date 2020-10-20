// 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree
var getTargetCopy = function(original, cloned, target)
{
	let originalStack = new Array();
	let clonedStack = new Array();

	originalStack.push(original);
	clonedStack.push(cloned);

	while (originalStack.length > 0)
	{
		let originalNode = originalStack.pop();
		let clonedNode = clonedStack.pop();

		if (originalNode == null)
		{
			continue;
		}

		if (originalNode === target)
		{
			return clonedNode;
		}

		originalStack.push(originalNode.left);
		originalStack.push(originalNode.right);

		clonedStack.push(clonedNode.left);
		clonedStack.push(clonedNode.right);
	}

	return null;
};