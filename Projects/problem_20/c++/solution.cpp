#include <string>
#include <stack>

using namespace std;

class Solution
{
	public:
	bool isValid(string symbols)
	{
		stack<char> s;
		
		if (symbols.size() == 0) return true;
		
		if (symbols.size() % 2 != 0) return false;

		for (char c : symbols)
		{
			if (c == '(') s.push(')');
			else if (c == '[') s.push(']');
			else if (c == '{') s.push('}');
			else
			{
				if (s.size() == 0 || s.top() != c) return false;
				s.pop();
			}
		}

		if (s.size() == 0) return true;
		
		return false;
	}
};
