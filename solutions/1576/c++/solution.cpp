// 1576. Replace All ?'s to Avoid Consecutive Repeating Characters
#include <string>

using namespace std;

class Solution
{
	public:
	string modifyString(string s)
	{
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] != '?')
			{
				continue;
			}

			char finalCharacter = 'a';

			if (i > 0 && s[i - 1] != 'z')
			{
				finalCharacter = s[i - 1] + 1;
			}

			if (i < s.size() - 1 && finalCharacter == s[i + 1])
			{
				if (finalCharacter == 'z')
				{
					finalCharacter = 'a';
				}
				else
				{
					++finalCharacter;
				}
			}

			s[i] = finalCharacter;
		}

		return s;
	}
};