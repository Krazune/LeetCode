// 389. Find the Difference
public class Solution
{
	public char FindTheDifference(string s, string t)
	{
		int difference = 0;
		int index = 0;

		for (; index < s.Length; index++)
		{
			difference ^= s[index] ^ t[index];
		}

		return (char)(difference ^ t[index]);
	}
}