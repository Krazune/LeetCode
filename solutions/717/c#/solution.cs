// 717. 1-bit and 2-bit Characters
public class Solution
{
	public bool IsOneBitCharacter(int[] bits)
	{
		int count = 0;

		for (int index = bits.Length - 2; index >= 0 && bits[index] == 1; index--)
		{
			count++;
		}

		return count % 2 == 0;
	}
}