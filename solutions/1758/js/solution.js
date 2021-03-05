// 1758. Minimum Changes To Make Alternating Binary String
var minOperations = function(s)
{
	let alternatingChangesA = 0;
	let alternatingChangesB = 0;

	for (let i = 0; i < s.length; ++i)
	{
		let expectedCharA = String.fromCharCode(i % 2 + 48)[0];

		if (s[i] != expectedCharA)
		{
			++alternatingChangesA;
		}
		else
		{
			++alternatingChangesB;
		}
	}

	return Math.min(alternatingChangesA, alternatingChangesB);
};