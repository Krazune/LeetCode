// 1323. Maximum 69 Number
var maximum69Number = function(num)
{
	let currentNum = num;
	let leftMostSixPosition = -1;
	let currentPosition = 0;

	while (currentNum != 0)
	{
		let digit = currentNum % 10;

		currentNum = Math.floor(currentNum / 10);

		if (digit == 6)
		{
			leftMostSixPosition = currentPosition;
		}

		++currentPosition;
	}

	if (leftMostSixPosition == -1)
	{
		return num;
	}

	return num + 3 * Math.pow(10, leftMostSixPosition);
};