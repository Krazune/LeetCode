// 1784. Check if Binary String Has at Most One Segment of Ones
class Solution
{
	public boolean checkOnesSegment(String s)
	{
		boolean zeroFound = false;

		for (int i = 0; i < s.length(); ++i)
		{
			if (s.charAt(i) == '0')
			{
				if (!zeroFound)
				{
					zeroFound = true;
				}

				continue;
			}

			if (zeroFound)
			{
				return false;
			}
		}

		return true;
	}
}