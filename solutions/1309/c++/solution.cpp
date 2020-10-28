// 1309. Decrypt String from Alphabet to Integer Mapping
#include <string>

using namespace std;

class Solution
{
	public:
	string freqAlphabets(string s)
	{
		string result;

		for (int i = 0; i < s.size(); ++i)
		{
			if (s.size() >= i + 2 && s[i + 2] == '#')
			{
				string numberString;

				numberString += s[i];
				numberString += s[i + 1];

				result += stoi(numberString) - 1 + 'a';

				 i += 2;
			}
			else
			{
				result += s[i] - '0' + 'a' - 1;
			}
		}

		return result;
	}
};