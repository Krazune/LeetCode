// 345. Reverse Vowels of a String
#include <string>
#include <cctype>

using namespace std;

class Solution
{
	public:
	string reverseVowels(string inputString)
	{
		for (int l = 0, r = inputString.size() - 1; l < r; )
		{
			char ll = tolower(inputString[l]), rl = tolower(inputString[r]);
			
			if (ll == 'a' || ll == 'e' || ll == 'i' || ll == 'o' || ll == 'u')
			{
				if (rl == 'a' || rl == 'e' || rl == 'i' || rl == 'o' || rl == 'u')
				{
					char t = inputString[l];
					
					inputString[l] = inputString[r];
					inputString[r] = t;
					l++;
				}
				r--;
			}
			else
			{
				if (rl != 'a' && rl != 'e' && rl != 'i' && rl != 'o' && rl != 'u') r--;
				l++;
			}
		}
		
		return inputString;
	}
};
