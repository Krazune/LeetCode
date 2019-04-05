// 771. Jewels and Stones
import java.util.HashSet;

class Solution
{
	public int numJewelsInStones(String J, String S)
	{
		HashSet<Character> jewels = new HashSet<Character>();
		int jewelsLength = J.length();

		for (int characterIndex = 0; characterIndex < jewelsLength; ++characterIndex)
		{
			jewels.add(J.charAt(characterIndex));
		}

		int jewelsFound = 0;
		int stonesLength = S.length();

		for (int characterIndex = 0; characterIndex < stonesLength; ++characterIndex)
		{
			if (jewels.contains(S.charAt(characterIndex)))
			{
				++jewelsFound;
			}
		}

		return jewelsFound;
	}
}