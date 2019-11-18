// 1108. Defanging an IP Address
#include <string>

using namespace std;

class Solution
{
	public:
	string defangIPaddr(string address)
	{
		string defangedIp;

		for (char character : address)
		{
			if (character == '.')
			{
				defangedIp += "[.]";
			}
			else
			{
				defangedIp += character;
			}
		}

		return defangedIp;
	}
};