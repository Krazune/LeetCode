// 171. Excel Sheet Column Number
#include <cmath>

using namespace std;

class Solution
{
	public:
	int titleToNumber(string s)
	{
		int column = 0;
		int titleSize = s.size();

		for (int letterIndex = titleSize - 1; letterIndex >= 0; --letterIndex)
		{
			column += (s[letterIndex] - 'A' + 1) * pow(26, titleSize - letterIndex - 1);
		}

		return column;
	}
};