// 405. Convert a Number to Hexadecimal
#include <string>

using namespace std;

class Solution
{
	public:
	string toHex(int num)
	{
		if (num == 0)
		{
			return "0";
		}

		string hex;
		const char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
		unsigned int number = num;

		while (number != 0)
		{
			hex = digits[number % 16] + hex;
			number /= 16;
		}

		return hex;
	}
};