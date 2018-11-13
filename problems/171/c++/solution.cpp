// 171. Excel Sheet Column Number
#include <cmath>

using namespace std;

class Solution
{
	public:
	int titleToNumber(string s)
	{
		int column = 0;
		int lastIndex = s.size() - 1;

		for (int letterIndex = lastIndex; letterIndex >= 0; --letterIndex)
		{
			column += (s[letterIndex] - 'A' + 1) * pow(26, lastIndex - letterIndex);
		}

		return column;
	}
};