// 859. Buddy Strings
#include <string>

using namespace std;

class Solution
{
	public:
	bool buddyStrings(string A, string B)
	{
		int aSize = A.size();
		int bSize = B.size();

		if (aSize != bSize || aSize == 0 || bSize == 0)
		{
			return false;
		}

		bool letterFound[26] = { false };
		bool duplicateFound = false;

		int differentLetterIndex = -1;
		bool letterSwitched = false;

		for (int letterIndex = 0; letterIndex < aSize; letterIndex++)
		{
			if (!duplicateFound)
			{
				int alphabetIndex = A[letterIndex] - 'a';

				if (letterFound[alphabetIndex])
				{
					duplicateFound = true;
				}
				else
				{
					letterFound[alphabetIndex] = true;
				}
			}

			if (A[letterIndex] != B[letterIndex])
			{
				if (letterSwitched)
				{
					return false;
				}

				if (differentLetterIndex == -1)
				{
					differentLetterIndex = letterIndex;
				}
				else
				{
					if (A[differentLetterIndex] != B[letterIndex] || A[letterIndex] != B[differentLetterIndex])
					{
						return false;
					}

					letterSwitched = true;
				}
			}
		}

		return duplicateFound || letterSwitched;
	}
};