// 504. Base 7
#include <string>
#include <cstdlib>

using namespace std;

class Solution
{
	public:
	string convertToBase7(int num)
	{
		if (num == 0)
		{
			return "0";
		}

		int absoluteNumber = abs(num);
		string base7;

		while (absoluteNumber != 0)
		{
			base7 = to_string(absoluteNumber % 7) + base7;
			absoluteNumber /= 7;
		}

		if (num < 0)
		{
			base7 = '-' + base7;
		}

		return base7;
	}
};