// 125. Valid Palindrome
#include <string>
#include <cctype>

using namespace std;

class Solution
{
	public:
	bool isPalindrome(string s)
	{
		int low = 0;
        int high = s.size() - 1;

		while (low < high)
		{
			if (isalnum(s[low]))
			{
				if (isalnum(s[high]))
				{
					if (tolower(s[low]) != tolower(s[high]))
					{
						return false;
					}

					low++;
				}

				high--;
			}
			else
			{
				if (!isalnum(s[high]))
				{
					high--;
				}

				low++;
			}
		}

		return true;
	}
};