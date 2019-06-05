// 62. Unique Paths
class Solution
{
	public int uniquePaths(int m, int n)
	{
		if (m == 1 || n == 1)
		{
			return 1;
		}

		int[][] uniquePathsMatrix = new int[m - 1][n - 1];

		for (int column = uniquePathsMatrix.length - 1; column >= 0; --column)
		{
			for (int row = uniquePathsMatrix[0].length - 1; row >= 0; --row)
			{
				int bottomValue = 1;

				if (row + 1 < uniquePathsMatrix[0].length)
				{
					bottomValue = uniquePathsMatrix[column][row + 1];
				}

				int rightValue = 1;

				if (column + 1 < uniquePathsMatrix.length)
				{
					rightValue = uniquePathsMatrix[column + 1][row];
				}

				uniquePathsMatrix[column][row] = bottomValue + rightValue;
			}
		}

		return uniquePathsMatrix[0][0];
	}
}