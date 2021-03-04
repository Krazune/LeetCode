// 1748. Sum of Unique Elements
var sumOfUnique = function(nums)
{
	let numberOccurences = new Map();

	for (let i = 0; i < nums.length; ++i)
	{
		if (numberOccurences.has(nums[i]))
		{
			numberOccurences.set(nums[i], numberOccurences.get(nums[i]) + 1);
		}
		else
		{
			numberOccurences.set(nums[i], 1);
		}
	}

	let sum = 0;

	for (const element of numberOccurences)
	{
		if (element[1] != 1)
		{
			continue;
		}

		sum += element[0];
	}

	return sum;
};