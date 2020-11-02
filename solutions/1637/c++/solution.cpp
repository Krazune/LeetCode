// 1637. Widest Vertical Area Between Two Points Containing No Points
#include <vector>

using namespace std;

class Solution
{
	public:
	int maxWidthOfVerticalArea(vector<vector<int>>& points)
	{
		vector<int> xPoints;

		for (int i = 0; i < points.size(); ++i)
		{
			xPoints.push_back(points[i][0]);
		}

		sort(xPoints.begin(), xPoints.end());

		int widestDifference = 0;

		for (int i = 1; i < xPoints.size(); ++i)
		{
			int difference = xPoints[i] - xPoints[i - 1];

			if (difference > widestDifference)
			{
				widestDifference = difference;
			}
		}

		return widestDifference;
	}
};