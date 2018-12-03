// 752. Open the Lock
#include <vector>
#include <string>
#include <set>
#include <queue>

using namespace std;

class Solution
{
	public:
	int openLock(vector<string>& deadends, string target)
	{
		set<int> ends;

		for (string deadEnd : deadends)
		{
			ends.insert(stoi(deadEnd));
		}

		if (ends.find(0) != ends.end())
		{
			return -1;
		}

		queue<int> possible;
		set<int> visited;
		int distance = 0;
		int combinationSize = target.size();
		int targetInteger = stoi(target);

		possible.push(0);
		visited.insert(0);

		while (!possible.empty())
		{
			int combinationCount = possible.size();

			for (int index = 0; index < combinationCount; index++)
			{
				int currentCombination = possible.front();

				possible.pop();

				if (currentCombination == targetInteger)
				{
					return distance;
				}

				int digitsLeft = currentCombination;

				for (int index = 0; index < combinationSize; index++)
				{
					int modifier = pow(10, index);
					int digit = digitsLeft % 10;
					int incremented = currentCombination + (digit == 9 ? -9 * modifier : modifier);
					int decremented = currentCombination + (digit == 0 ? 9 * modifier : -modifier);

					digitsLeft /= 10;

					if (visited.find(incremented) == visited.end() && ends.find(incremented) == ends.end())
					{
						visited.insert(incremented);
						possible.push(incremented);
					}

					if (visited.find(decremented) == visited.end() && ends.find(decremented) == ends.end())
					{
						visited.insert(decremented);
						possible.push(decremented);
					}
				}
			}

			distance++;
		}

		return -1;
	}
};