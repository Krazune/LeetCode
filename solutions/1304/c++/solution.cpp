// 1304. Find N Unique Integers Sum up to Zero
#include <vector>

using namespace std;

class Solution
{
	public:
	vector<int> sumZero(int n)
	{
		vector<int> result;
		int total = 0;

		for (int i = 0; i < n - 1; ++i)
		{
			result.push_back(i);
			total += i;
		}

		result.push_back(total * -1);

		return result;
	}
};