// 1071. Greatest Common Divisor of Strings
class Solution
{
	public String gcdOfStrings(String str1, String str2)
	{
		if (str1.length() < str2.length())
		{
			String temporary = str1;

			str1 = str2;
			str2 = temporary;
		}

		String commonPrefix = "";
		String temporaryCommonPrefix = "";
		int string1Length = str1.length();
		int string2Length = str2.length();

		for (int characterIndex = 0; characterIndex < string2Length; ++characterIndex)
		{
			if (str1.charAt(characterIndex) != str2.charAt(characterIndex))
			{
				break;
			}

			temporaryCommonPrefix += str1.charAt(characterIndex);

			if ((string1Length % (temporaryCommonPrefix.length()) != 0))
			{
				continue;
			}

			if ((string2Length % (temporaryCommonPrefix.length()) != 0))
			{
				continue;
			}

			commonPrefix = temporaryCommonPrefix;
		}

		if (commonPrefix.length() == 0)
		{
			return "";
		}

		for (int characterIndex = commonPrefix.length(); characterIndex < string1Length; ++characterIndex)
		{
			char currentCharacter = commonPrefix.charAt(characterIndex % commonPrefix.length());

			if ((str1.charAt(characterIndex) != currentCharacter))
			{
				return "";
			}

			if (characterIndex < string2Length && (str2.charAt(characterIndex) != currentCharacter))
			{
				return "";
			}
		}

		return commonPrefix;
	}
}