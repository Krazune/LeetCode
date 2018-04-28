// 58. Length of Last Word
public class Solution
{
	public int LengthOfLastWord(string s)
	{
		int length = 0;
		bool word = false;

		for (int index = s.Length - 1; index >= 0; index--)
		{
			if (s[index] != ' ')
			{
				if (!word)
				{
					word = true;
				}

				length++;
			}
			else if (word)
			{
				break;
			}
		}

		return length;
	}
}