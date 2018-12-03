// 557. Reverse Words in a String III
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	string reverseWords(string s)
	{
		string::iterator low = s.begin();
		string::iterator high = s.begin();

		for (char character : s)
		{
			if (character == ' ')
			{
				reverse(low, high);
				high++;
				low = high;
			}
			else
			{
				high++;
			}
		}

		if (low != high)
		{
			reverse(low, high);
		}

		return s;
	}
};