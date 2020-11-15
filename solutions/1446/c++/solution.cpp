// 1446. Consecutive Characters
#include <string>

using namespace std;

class Solution
{
	public:
	int maxPower(string s)
	{
		char currentCharacter = s[0];
		int currentPower = 1;
		int power = 1;

		for (int i = 1; i < s.size(); ++i)
		{
			if (s[i] == currentCharacter)
			{
				++currentPower;
			}
			else
			{
				if (currentPower > power)
				{
					power = currentPower;
				}

				currentCharacter = s[i];
				currentPower = 1;
			}
		}

		if (currentPower > power)
		{
			power = currentPower;
		}

		return power;
	}
};