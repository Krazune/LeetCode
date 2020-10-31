// 1556. Thousand Separator
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	string thousandSeparator(int n)
	{
		if (n == 0)
		{
			return "0";
		}

		string result;
		int digitGroup = 0;

		while (n != 0)
		{
			if (digitGroup == 3)
			{
				result += '.';
				digitGroup = 0;
			}

			result += n % 10 + '0';
			n /= 10;
			++digitGroup;
		}

		reverse(result.begin(), result.end());

		return result;
	}
};