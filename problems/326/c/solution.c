// 326. Power of Three
#include <stdbool.h>

bool isPowerOfThree(int n)
{
	return n > 0 && 1162261467 % n == 0;
}