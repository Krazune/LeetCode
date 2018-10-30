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
		set<string> deadEnds;

		for (string deadEnd : deadends)
		{
			deadEnds.insert(deadEnd);
		}

		if (deadEnds.find("0000") != deadEnds.end())
		{
			return -1;
		}

		queue<string> combinations;
		set<string> combinationsVisited;
		int distance = 0;
		int combinationSize = target.size();

		combinations.push("0000");
		combinationsVisited.insert("0000");

		while (!combinations.empty())
		{
			int combinationCount = combinations.size();

			for (int index = 0; index < combinationCount; index++)
			{
				string currentCombination = combinations.front();

				combinations.pop();

				if (currentCombination == target)
				{
					return distance;
				}

				for (int characterIndex = 0; characterIndex < combinationSize; characterIndex++)
				{
					int currentDigit = currentCombination[characterIndex] - '0';
					string temporaryCombination = currentCombination;

					temporaryCombination[characterIndex] = (currentDigit + 1) % 10 + '0';

					if (combinationsVisited.find(temporaryCombination) == combinationsVisited.end() && deadEnds.find(temporaryCombination) == deadEnds.end())
					{
						combinationsVisited.insert(temporaryCombination);
						combinations.push(temporaryCombination);
					}

					temporaryCombination[characterIndex] = (currentDigit + 9) % 10 + '0';

					if (combinationsVisited.find(temporaryCombination) == combinationsVisited.end() && deadEnds.find(temporaryCombination) == deadEnds.end())
					{
						combinationsVisited.insert(temporaryCombination);
						combinations.push(temporaryCombination);
					}
				}
			}

			distance++;
		}

		return -1;
	}
};