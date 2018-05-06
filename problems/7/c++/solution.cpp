// 7. Reverse Integer
#include <cstdint>

class Solution
{
	public:
	int reverse(int x)
	{
		long long int reversed = 0;

		while (x != 0)
		{
			reversed = reversed * 10 + x % 10;

			if (reversed > INT32_MAX || reversed < INT32_MIN)
			{
				return 0;
			}

			x /= 10;
		}

		return reversed;
	}
};