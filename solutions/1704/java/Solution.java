// 1704. Determine if String Halves Are Alike
class Solution
{
	public boolean halvesAreAlike(String s)
	{
		int vowelCount = 0;
		int halfSize = s.length() / 2;

		for (int i = 0; i < halfSize; ++i)
		{
			char c = s.charAt(i);

			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			{
				++vowelCount;
			}
		}

		for (int i = halfSize; i < s.length(); ++i)
		{
			char c = s.charAt(i);

			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			{
				--vowelCount;

				if (vowelCount < 0)
				{
					return false;
				}
			}
		}

		return vowelCount == 0;
	}
}