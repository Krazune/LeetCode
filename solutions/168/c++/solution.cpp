// 168. Excel Sheet Column Title
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	string convertToTitle(int n)
	{
		string title;

		while (n > 0)
		{
			n--;

			char letter = n % 26 + 'A';

			title += letter;
			n /= 26;
		}

		reverse(title.begin(), title.end());

		return title;
	}
};