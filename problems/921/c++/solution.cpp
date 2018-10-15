// 921. Minimum Add to Make Parentheses Valid
#include <string>

using namespace std;

class Solution
{
	public:
	int minAddToMakeValid(string S)
	{
		int level = 0;
		int invalidCount = 0;

		for (char character : S)
		{
			if (character == '(')
			{
				level++;
			}
			else if (level == 0)
			{
				invalidCount++;
			}
			else
			{
				level--;
			}
		}

		return level + invalidCount;
	}
};