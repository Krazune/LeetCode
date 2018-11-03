// 831. Masking Personal Information
#include <string>

using namespace std;

class Solution
{
	public:
	string maskPII(string S)
	{
		int characterIndex = 0;
		string maskedInformation;
		int characterCount = S.size();

		if (isalpha(S[characterIndex]))
		{
			maskedInformation += tolower(S[characterIndex]) + "*****";

			characterIndex++;

			do
			{
				characterIndex++;
			}
			while (S[characterIndex] != '@');

			maskedInformation += tolower(S[characterIndex - 1]);

			for (; characterIndex < characterCount; characterIndex++)
			{
				maskedInformation += tolower(S[characterIndex]);
			}
		}
		else
		{
			string digits;

			for (; characterIndex < characterCount; characterIndex++)
			{
				if (S[characterIndex] == ' ' || S[characterIndex] == '(' || S[characterIndex] == ')' || S[characterIndex] == '+' || S[characterIndex] == '-')
				{
					continue;
				}

				digits += S[characterIndex];
			}

			int digitCount = digits.size();

			if (digitCount > 10)
			{
				maskedInformation += '+';
			}

			int digitIndex = 0;
			int asteriskCount = digitCount - 10;

			for (; digitIndex < asteriskCount; digitIndex++)
			{
				maskedInformation += '*';
			}

			if (maskedInformation.size() > 0)
			{
				maskedInformation += '-';
			}

			maskedInformation += "***-***-" + digits.substr(digitCount - 4, 4);
		}

		return maskedInformation;
	}
};