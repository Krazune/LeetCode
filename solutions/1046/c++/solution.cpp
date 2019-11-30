// 1046. Last Stone Weight
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	int lastStoneWeight(vector<int>& stones)
	{
		if (stones.size() == 1)
		{
			return stones[0];
		}

		int nonZeroStoneCount = stones.size();

		do
		{
			sort(stones.begin(), stones.end());

			int heaviestWeight = stones[stones.size() - 1];
			int secondHeaviestWeight = stones[stones.size() - 2];

			if (heaviestWeight == secondHeaviestWeight)
			{
				stones[stones.size() - 1] = 0;
				stones[stones.size() - 2] = 0;

				nonZeroStoneCount -= 2;
			}
			else
			{
				stones[stones.size() - 1] -= secondHeaviestWeight;
				stones[stones.size() - 2] = 0;

				--nonZeroStoneCount;
			}
		}
		while (nonZeroStoneCount > 1);

		sort(stones.begin(), stones.end());

		return stones[stones.size() - 1];
	}
};