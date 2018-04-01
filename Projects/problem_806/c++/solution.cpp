// 806. Number of Lines To Write String
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> numberOfLines(vector<int>& widths, string S)
	{
		vector<int> r(2, 1);
		int l = 0;
		
		for (char c : S)
		{
			int w = widths[c - 'a'];
			
			if (l + w > 100)
			{
				r[0]++;
				l = w;
			}
			else l += w;
		}
		
		r[1] = l;
		
		return r;
	}
};