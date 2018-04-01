// 434. Number of Segments in a String
#include <string>

using namespace std;

class Solution
{
	public:
	int countSegments(string input)
	{
		bool s = false;
		int r = 0;
		
		for (char c : input)
		{
			if (c != ' ')
			{
				if (!s)
				{
					s = true;
					r++;
				}
			}
			else s = false;
		}
		
		return r;
	}
};
