// 693. Binary Number with Alternating Bits
public class Solution
{
	public bool HasAlternatingBits(int n)
	{
		if (n <= 2)
		{
			return true;
		}

		bool bitState = ((n & 1) == 1);

		n >>= 1;

		do
		{
			if (bitState != ((n & 1) == 1))
			{
				bitState = !bitState;
				n >>= 1;
			}
			else
			{
				return false;
			}
		}
		while (n > 0);

		return true;
	}
}