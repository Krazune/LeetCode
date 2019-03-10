// 201. Bitwise AND of Numbers Range
class Solution
{
	public:
	int rangeBitwiseAnd(int m, int n)
	{
		int result = 0;

		for (int bit = 31; bit >= 0; --bit)
		{
			int mask = 1 << bit;

			if ((mask & m) != (mask & n))
			{
				break;
			}

			result |= mask & n;
		}

		return result;
	}
};