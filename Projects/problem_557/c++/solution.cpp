// 557. Reverse Words in a String III
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	string reverseWords(string s)
	{
		string::iterator l = s.begin(), r = s.begin();
		
		for (char c : s)
		{
			if (c == ' ')
			{
				reverse(l, r);
				r++;
				l = r;
			}
			else r++;
		}
		
		if (l != r) reverse(l, r);
		
		return s;
	}
};