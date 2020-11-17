// 997. Find the Town Judge
#include <vector>

using namespace std;

class Solution
{
	public:
	int findJudge(int N, vector<vector<int>>& trust)
	{
		vector<int> trustAmount(N, 0);

		for (int i = 0; i < trust.size(); ++i)
		{
			++trustAmount[trust[i][1] - 1];
			--trustAmount[trust[i][0] - 1];
		}

		for (int i = 0; i < N; ++i)
		{
			if (trustAmount[i] == N - 1)
			{
				return i + 1;
			}
		}

		return -1;
	}
};