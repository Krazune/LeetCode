// 476. Number Complement
int findComplement(int num)
{
	unsigned int m = ~0;
	
	while (m & num) m <<= 1;
	
	return ~m ^ num;
}