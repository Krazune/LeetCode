// 3. Longest Substring Without Repeating Characters
using System;

public class Solution
{
	public int LengthOfLongestSubstring(string inputString)
	{
		String longestSubstring = "", currentSubstring = "";

		foreach (char character in inputString)
		{
			int index = currentSubstring.IndexOf(character);

			if (index != -1)
			{
				currentSubstring = currentSubstring.Remove(0, index + 1);
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