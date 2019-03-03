// 961. N-Repeated Element in Size 2N Array
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	int repeatedNTimes(vector<int>& A)
	{
		unordered_set<int> occurrences;

		for (int index = 0; index < A.size(); ++index)
		{
			int currentValue = A[index];

			if (!occurrences.insert(currentValue).second)
			{
				return currentValue;
			}
		}

		return 0; // unreachable
	}
};