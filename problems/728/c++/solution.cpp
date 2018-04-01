// 728. Self Dividing Numbers
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> selfDividingNumbers(int left, int right)
	{
		vector<int> r;

		for (int i = left; i <= right; i++)
		{
			int l = i;
			bool v = true;
			
			do
			{
				int d = l % 10;
				
				if (d == 0 || i % d != 0)
				{
					v = false;
					break;
				}
				else l /= 10;
			}
			while (l > 0);
			
			if (v) r.push_back(i);
		}
		
		return r;
	}
};