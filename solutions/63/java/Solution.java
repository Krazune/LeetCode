// 63. Unique Paths II
class Solution
{
	public int uniquePathsWithObstacles(int[][] obstacleGrid)
	{
		int columnCount = obstacleGrid.length;
		int rowCount = obstacleGrid[0].length;
		int[][] uniquePathsMatrix = new int[columnCount][rowCount];

		for (int column = columnCount - 1; column >= 0; --column)
		{
			for (int row = rowCount - 1; row >= 0; --row)
			{
				if (obstacleGrid[column][row] == 1)
				{
					uniquePathsMatrix[column][row] = 0;

					continue;
				}

				if (column == columnCount - 1 && row == rowCount - 1)
				{
					uniquePathsMatrix[column][row] = 1;

					continue;
				}

				int bottomValue = 0;

				if (row + 1 < rowCount)
				{
					bottomValue = uniquePathsMatrix[column][row + 1];
				}

				int rightValue = 0;

				if (column + 1 < columnCount)
				{
					rightValue = uniquePathsMatrix[column + 1][row];
				}

				uniquePathsMatrix[column][row] = bottomValue + rightValue;
			}
		}

		return uniquePathsMatrix[0][0];
	}
}