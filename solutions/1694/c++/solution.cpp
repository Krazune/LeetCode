// 1694. Reformat Phone Number
#include <string>
#include <vector>

using namespace std;

class Solution
{
	public:
	string reformatNumber(string number)
	{
		vector<char> digitCharacters;

		for (int i = 0; i < number.size(); ++i)
		{
			if (number[i] == ' ' || number[i] == '-')
			{
				continue;
			}

			digitCharacters.push_back(number[i]);
		}

		string reformattedNumber;
		int digitIndex = 0;

		while (digitIndex + 4 < digitCharacters.size())
		{
			reformattedNumber += digitCharacters[digitIndex++];
			reformattedNumber += digitCharacters[digitIndex++];
			reformattedNumber += digitCharacters[digitIndex++];

			if (digitIndex < digitCharacters.size())
			{
				reformattedNumber += '-';
			}
		}

		int digitsLeft = digitCharacters.size() - digitIndex;

		switch (digitsLeft)
		{
			case 2:
			reformattedNumber += digitCharacters[digitIndex];
			reformattedNumber += digitCharacters[digitIndex + 1];
			break;

			case 3:
			reformattedNumber += digitCharacters[digitIndex];
			reformattedNumber += digitCharacters[digitIndex + 1];
			reformattedNumber += digitCharacters[digitIndex + 2];
			break;

			case 4:
			reformattedNumber += digitCharacters[digitIndex];
			reformattedNumber += digitCharacters[digitIndex + 1];
			reformattedNumber += '-';
			reformattedNumber += digitCharacters[digitIndex + 2];
			reformattedNumber += digitCharacters[digitIndex + 3];
			break;
		}

		return reformattedNumber;
	}
};