// 976. Largest Perimeter Triangle
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Solution
{
	public:
	int largestPerimeter(vector<int>& A)
	{
		vector<int> sorted(A);

		sort(sorted.begin(), sorted.end(), greater<int>());

		for (int i = 0; i < sorted.size() - 2; ++i)
		{
			if (sorted[i] < sorted[i + 1] + sorted[i + 2])
			{
				return sorted[i] + sorted[i + 1] + sorted[i + 2];
			}
		}

		return 0;
	}
};