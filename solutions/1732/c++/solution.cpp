// 1732. Find the Highest Altitude
#include <vector>

using namespace std;

class Solution
{
	public:
	int largestAltitude(vector<int>& gain)
	{
		int highest = 0;
		int currentAltitude = 0;

		for (int i = 0; i < gain.size(); ++i)
		{
			currentAltitude += gain[i];

			if (currentAltitude > highest)
			{
				highest = currentAltitude;
			}
		}

		return highest;
	}
};