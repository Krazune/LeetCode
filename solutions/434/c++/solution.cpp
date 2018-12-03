// 434. Number of Segments in a String
#include <string>

using namespace std;

class Solution
{
	public:
	int countSegments(string input)
	{
		bool inSegment = false;
		int count = 0;

		for (char character : input)
		{
			if (character != ' ')
			{
				if (!inSegment)
				{
					inSegment = true;
					count++;
				}
			}
			else
			{
				inSegment = false;
			}
		}

		return count;
	}
};