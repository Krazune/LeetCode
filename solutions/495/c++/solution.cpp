// 495. Teemo Attacking
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	int findPoisonedDuration(vector<int>& timeSeries, int duration)
	{
		if (timeSeries.size() == 0)
		{
			return 0;
		}

		int totalDuration = duration;

		for (int timeIndex = 0; timeIndex < timeSeries.size() - 1; ++timeIndex)
		{
			totalDuration += min(duration, timeSeries[timeIndex + 1] - timeSeries[timeIndex]);
		}

		return totalDuration;
	}
};