// 58. Length of Last Word
public class Solution
{
	public int LengthOfLastWord(string s)
	{
		int n = s.Length, int t = 0;
		bool w = false;
		
		for (int i = n - 1; i >= 0; i--)
		{
			if (s[i] != ' ')
			{
				if (!w) w = true;
				
				t++;
			}
			else if (w) break;
		}
		
		return t;
	}
}
