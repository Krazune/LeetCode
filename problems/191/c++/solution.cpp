// 191. Number of 1 Bits
#include <cstdint>

using namespace std;

class Solution
{
	public:
	int hammingWeight(uint32_t n)
	{
		int weight = 0;

		while (n > 0)
		{
			weight += n & 1;
			n >>= 1;
		}

		return weight;
	}
};