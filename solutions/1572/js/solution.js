// 1572. Matrix Diagonal Sum
var diagonalSum = function(mat)
{
	let sum = 0;

	for (let i = 0, j = mat.length - 1; i < mat.length; ++i, --j)
	{
		sum += mat[i][i];
		sum += mat[i][j];
	}

	if (mat.length % 2 != 0)
	{
		let centerIndex = Math.floor(mat.length / 2);

		sum -= mat[centerIndex][centerIndex];
	}

	return sum;
};