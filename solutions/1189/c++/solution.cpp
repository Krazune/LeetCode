// 1189. Maximum Number of Balloons
#include <string>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
	public:
	int maxNumberOfBalloons(string text)
	{
		vector<int> frequencies(5, 0); // [0] = b, [1] = a, [2] = ll, [3] = oo, [4] = n

		for (int i = 0; i < text.size(); ++i)
		{
			switch (text[i])
			{
				case 'b':
				++frequencies[0];
				break;

				case 'a':
				++frequencies[1];
				break;

				case 'l':
				++frequencies[2];
				break;

				case 'o':
				++frequencies[3];
				break;

				case 'n':
				++frequencies[4];
				break;
			}
		}

		frequencies[2] /= 2;
		frequencies[3] /= 2;

		int balloonCount = INT_MAX;

		for (int i = 0; i < 5; ++i)
		{
			if (frequencies[i] < balloonCount)
			{
				balloonCount = frequencies[i];
			}
		}

		return balloonCount;
	}
};