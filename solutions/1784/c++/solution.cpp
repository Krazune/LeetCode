// 1784. Check if Binary String Has at Most One Segment of Ones
#include <string>

using namespace std;

class Solution
{
	public:
	bool checkOnesSegment(string s)
	{
		bool zeroFound = false;

		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] == '0')
			{
				if (!zeroFound)
				{
					zeroFound = true;
				}

				continue;
			}

			if (zeroFound)
			{
				return false;
			}
		}

		return true;
	}
};