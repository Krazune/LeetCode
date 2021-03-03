// 1768. Merge Strings Alternately
class Solution
{
	public String mergeAlternately(String word1, String word2)
	{
		StringBuilder result = new StringBuilder();

		for (int i = 0;; ++i)
		{
			boolean isComplete = true;

			if (i < word1.length())
			{
				result.append(word1.charAt(i));

				isComplete = false;
			}

			if (i < word2.length())
			{
				result.append(word2.charAt(i));

				isComplete = false;
			}

			if (isComplete)
			{
				break;
			}
		}

		return result.toString();
	}
}