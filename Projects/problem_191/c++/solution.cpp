// 191. Number of 1 Bits
#include <cstdint>

using namespace std;

class Solution
{
	public:
	int hammingWeight(uint32_t n)
	{
		int w = 0;
		
		while (n > 0)
		{
			w += n & 1;
			n >>= 1;
		}
		
		return w;
	}
};
