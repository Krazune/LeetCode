// 1252. Cells with Odd Values in a Matrix
var oddCells = function(n, m, indices)
{
	let rowIncrements = new Array(n).fill(0);
	let columnIncrements = new Array(m).fill(0);

	for (let i = 0; i < indices.length; ++i)
	{
		++rowIncrements[indices[i][0]];
		++columnIncrements[indices[i][1]];
	}

	let odds = 0;

	for (let i = 0; i < n; ++i)
	{
		for (let j = 0; j < m; ++j)
		{
			let sum = 0;

			sum += rowIncrements[i];
			sum += columnIncrements[j];

			if (sum % 2 != 0)
			{
				++odds;
			}
		}
	}

	return odds;
};