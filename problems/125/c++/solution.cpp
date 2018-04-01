// 125. Valid Palindrome
#include <string>
#include <cctype>

using namespace std;

class Solution
{
	public:
	bool isPalindrome(string s)
	{
		int l = 0, r = s.size() - 1;
		
		while (l < r)
		{
			if (isalnum(s[l]))
			{
				if (isalnum(s[r]))
				{
					if (tolower(s[l]) != tolower(s[r])) return false;
					
					l++;
				}
				
				r--;
			}
			else
			{
				if (!isalnum(s[r])) r--;
				
				l++;
			}
		}
		
		return true;
	}
};