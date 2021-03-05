// 1758. Minimum Changes To Make Alternating Binary String
class Solution
{
	public int minOperations(String s)
	{
		int alternatingChangesA = 0;
		int alternatingChangesB = 0;

		for (int i = 0; i < s.length(); ++i)
		{
			char expectedCharA = (char)(i % 2 + '0');

			if (s.charAt(i) != expectedCharA)
			{
				++alternatingChangesA;
			}
			else
			{
				++alternatingChangesB;
			}
		}

		return Math.min(alternatingChangesA, alternatingChangesB);
	}
}