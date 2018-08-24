// 190. Reverse Bits
#include <stdint.h>

uint32_t reverseBits(uint32_t n)
{
	uint32_t reversed = 0;

	for (int bit = 0; bit < 32; bit++)
	{
		reversed <<= 1;

		reversed += n & 1;

		n >>= 1;
	}

	return reversed;
}