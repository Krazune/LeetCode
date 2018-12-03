// 806. Number of Lines To Write String
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> numberOfLines(vector<int>& widths, string S)
	{
		vector<int> result(2, 1);
		int lastLineWidth = 0;

		for (char character : S)
		{
			int lineWidth = widths[character - 'a'];

			if (lastLineWidth + lineWidth > 100)
			{
				result[0]++;
				lastLineWidth = lineWidth;
			}
			else
			{
				lastLineWidth += lineWidth;
			}
		}

		result[1] = lastLineWidth;

		return result;
	}
};