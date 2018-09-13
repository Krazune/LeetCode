// 6. ZigZag Conversion
#include <string>
#include <vector>

using namespace std;

class Solution
{
	public:
	string convert(string s, int numRows)
	{
		if (numRows <= 1)
		{
			return s;
		}

		int stringSize = s.size();
		vector<string> rows(numRows);
		int rowIndex = 0;
		int step = 1;

		for (int characterIndex = 0; characterIndex < stringSize; characterIndex++)
		{
			if (rowIndex == 0)
			{
				step = 1;
			}
			else if (rowIndex == numRows - 1)
			{
				step = -1;
			}

			rows[rowIndex] += s[characterIndex];
			rowIndex += step;
		}

		string zigZagString;

		for (int rowIndex = 0; rowIndex < numRows; rowIndex++)
		{
			zigZagString += rows[rowIndex];
		}

		return zigZagString;
	}
};