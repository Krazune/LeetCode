// 495. Teemo Attacking
int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration)
{
	if (timeSeriesSize == 0)
	{
		return 0;
	}

	int totalDuration = duration;

	for (int timeIndex = 0; timeIndex < timeSeriesSize - 1; ++timeIndex)
	{
		int difference = timeSeries[timeIndex + 1] - timeSeries[timeIndex];

		if (difference < duration)
		{
			totalDuration += difference;
		}
		else
		{
			totalDuration += duration;
		}
	}

	return totalDuration;
}