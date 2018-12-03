// 344. Reverse String
#include <string>

using namespace std;

class Solution
{
	public:
	string reverseString(string s)
	{
		for (int low = 0, high = s.size() - 1; low < high; low++, high--)
		{
			char temporary = s[low];

			s[low] = s[high];
			s[high] = temporary;
		}

		return s;
	}
};