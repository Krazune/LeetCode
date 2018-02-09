// 3. Longest Substring Without Repeating Characters
using System;

public class Solution
{
	public int LongestSubstringLength(string inputString)
	{
		String longestSubstring = "";
		String currentSubstring = "";
		int repeatedCharacterIndex = -1;

		foreach (char character in inputString)
		{
			if ((repeatedCharacterIndex = currentSubstring.IndexOf(character)) != -1)
			{
				currentSubstring = currentSubstring.Remove(0, repeatedCharacterIndex + 1);
			}

			currentSubstring += character;

			if (currentSubstring.Length > longestSubstring.Length)
			{
				longestSubstring = currentSubstring;
			}
		}

		return longestSubstring.Length;
	}
}