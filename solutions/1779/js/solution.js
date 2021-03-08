// 1779. Find Nearest Point That Has the Same X or Y Coordinate
function distance(x1, y1, x2, y2)
{
	return Math.abs(x1 - x2) + Math.abs(y1 - y2);
}

var nearestValidPoint = function(x, y, points)
{
	let result = -1;
	let resultDistance = Number.MAX_VALUE;

	for (let i = 0; i < points.length; ++i)
	{
		if (points[i][0] == x)
		{
			let xDistance = distance(x, y, points[i][0], points[i][1]);

			if (xDistance < resultDistance)
			{
				result = i;
				resultDistance = xDistance;
			}
		}

		if (points[i][1] == y)
		{
			let yDistance = distance(x, y, points[i][0], points[i][1]);

			if (yDistance < resultDistance)
			{
				result = i;
				resultDistance = yDistance;
			}
		}
	}

	return result;
};