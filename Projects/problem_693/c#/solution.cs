// 693. Binary Number with Alternating Bits
public class Solution
{
	public bool HasAlternatingBits(int n)
	{
		if (n > 2)
		{
			bool z = ((n & 1) == 1);
			n >>= 1;
			
			do
			{
				if (z != ((n & 1) == 1))
				{
					z = !z;
					n >>= 1;
				}
				else return false;
			}
			while (n > 0);
		}
		
		return true;
	}
}
