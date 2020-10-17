// 1365. How Many Numbers Are Smaller Than the Current Number
var smallerNumbersThanCurrent = function(nums)
{
	let frequencies = new Array(101).fill(0);

	for (let i = 0; i < nums.length; ++i)
	{
		++frequencies[nums[i]];
	}

	let frequencySums = new Array(101);
	let sum = 0;

	for (let i = 0; i < frequencySums.length; ++i)
	{
		frequencySums[i] = sum;

		sum += frequencies[i];
	}

	let result = new Array(nums.length);

	for (let i = 0; i < nums.length; ++i)
	{
		result[i] = frequencySums[nums[i]];
	}

	return result;
};