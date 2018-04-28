// 3. Longest Substring Without Repeating Characters
using System;

public class Solution
{
	public int LengthOfLongestSubstring(string inputString)
	{
		String l = "", c = "";
		int i = -1;

		foreach (char character in inputString)
		{
			if ((i = c.IndexOf(character)) != -1) c = c.Remove(0, i + 1);

			c += character;

			if (c.Length > l.Length) l = c;
		}

		return l.Length;
	}
}