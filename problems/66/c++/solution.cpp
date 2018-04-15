// 66. Plus One
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> plusOne(vector<int>& digits)
	{
		vector<int> r(digits);
		int c = 1;

		for (int i = r.size() - 1; i >= 0; i--)
		{
			int t = r[i] + c;

			if (t > 9)
			{
				c = 1;
				r[i] = 0;
			}
			else
			{
				r[i] = t;

				return r;
			}
		}
		
		r.insert(r.begin(), 1);

		return r;
	}
};