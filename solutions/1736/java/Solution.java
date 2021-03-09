// 1736. Latest Time by Replacing Hidden Digits
class Solution
{
	public String maximumTime(String time)
	{
		StringBuilder result = new StringBuilder(time);

		if (result.charAt(0) == '?')
		{
			if (result.charAt(1) == '?')
			{
				result.setCharAt(0, '2');
				result.setCharAt(1, '3');
			}
			else if (result.charAt(1) == '0' || result.charAt(1) == '1' || result.charAt(1) == '2' || result.charAt(1) == '3')
			{
				result.setCharAt(0, '2');
			}
			else
			{
				result.setCharAt(0, '1');
			}
		}
		else if (result.charAt(0) == '0' || result.charAt(0) == '1')
		{
			if (result.charAt(1) == '?')
			{
				result.setCharAt(1, '9');
			}
		}
		else
		{
			if (result.charAt(1) == '?')
			{
				result.setCharAt(1, '3');
			}
		}

		if (result.charAt(3) == '?')
		{
			result.setCharAt(3, '5');
		}

		if (result.charAt(4) == '?')
		{
			result.setCharAt(4, '9');
		}

		return result.toString();
	}
}