// 1779. Find Nearest Point That Has the Same X or Y Coordinate
class Solution
{
	public int nearestValidPoint(int x, int y, int[][] points)
	{
		int result = -1;
		int resultDistance = Integer.MAX_VALUE;

		for (int i = 0; i < points.length; ++i)
		{
			if (points[i][0] == x)
			{
				int xDistance = distance(x, y, points[i][0], points[i][1]);

				if (xDistance < resultDistance)
				{
					result = i;
					resultDistance = xDistance;
				}
			}

			if (points[i][1] == y)
			{
				int yDistance = distance(x, y, points[i][0], points[i][1]);

				if (yDistance < resultDistance)
				{
					result = i;
					resultDistance = yDistance;
				}
			}
		}

		return result;
	}

	private int distance(int x1, int y1, int x2, int y2)
	{
		return Math.abs(x1 - x2) + Math.abs(y1 - y2);
	}
}