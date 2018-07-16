// 868. Binary Gap
class Solution
{
	public:
	int binaryGap(int N)
	{
		int longestDistance = 0;
		int firstZeroIndex = -1;
		int index = 0;

		while (N > 0)
		{
			if ((N & 1) == 1)
			{
				if (firstZeroIndex != -1)
				{
					int currentDistance = index - firstZeroIndex;

					if (currentDistance > longestDistance)
					{
						longestDistance = currentDistance;
					}
				}

				firstZeroIndex = index;
			}

			index++;
			N >>= 1;
		}

		return longestDistance;
	}
};