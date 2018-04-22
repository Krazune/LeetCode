// 821. Shortest Distance to a Character
#include <vector>
#include <string>
#include <climits>
#include <cstdlib>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	vector<int> shortestToChar(string S, char C)
	{
		vector<int> r(S.size(), INT_MAX);
		int p = -1;

		for (int i = 0; i < S.size(); i++)
		{
			if (S[i] == C) p = i;
			
			if (p != -1) r[i] = abs(i - p);
		}

		for (int i = S.size() - 1, p = -1; i >= 0; i--)
		{
			if (S[i] == C) p = i;
			
			if (p != -1) r[i] = min(r[i], abs(i - p));
		}

		return r;
	}
};