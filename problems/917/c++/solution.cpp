// 917. Reverse Only Letters
#include <string>
#include <cctype>

using namespace std;

class Solution
{
	public:
	string reverseOnlyLetters(string S)
	{
		int left = 0;
		int right = S.size() - 1;

		while (left < right)
		{
			if (isalpha(S[left]))
			{
				if (isalpha(S[right]))
				{
                    swap(S[left], S[right]);

					left++;
				}

				right--;
			}
			else
			{
				if (!isalpha(S[right]))
				{
					right--;
				}

				left++;
			}
		}

		return S;
	}
};