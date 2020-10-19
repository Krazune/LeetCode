// 1486. XOR Operation in an Array
var xorOperation = function(n, start)
{
	let result = 0;

	for (let i = 0; i < n; ++i)
	{
		result ^= start + i * 2;
	}

	return result;
};