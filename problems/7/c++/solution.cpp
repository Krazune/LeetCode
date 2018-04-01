// 7. Reverse Integer
#include <cstdint>

class Solution
{
	public:
	int reverse(int x)
	{
		long long int r = 0;
		
		while (x != 0)
		{
			r = r * 10 + x % 10;
			
			if (r > INT32_MAX || r < INT32_MIN) return 0;
			
			x /= 10;
		}
		
		return r;
	}
};
