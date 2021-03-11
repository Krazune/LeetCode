// 1684. Count the Number of Consistent Strings
class Solution
{
	public int countConsistentStrings(String allowed, String[] words)
	{
		HashSet<Character> allowedSet = new HashSet<Character>();

		for (int i = 0; i < allowed.length(); ++i)
		{
			allowedSet.add(allowed.charAt(i));
		}

		int allowedCount = words.length;

		for (int i = 0; i < words.length; ++i)
		{
			for (int j = 0; j < words[i].length(); ++j)
			{
				if (!allowedSet.contains(words[i].charAt(j)))
				{
					--allowedCount;

					break;
				}
			}
		}

		return allowedCount;
	}
}