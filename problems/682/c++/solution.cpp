// 682. Baseball Game
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution
{
	public:
	int calPoints(vector<string>& ops)
	{
		stack<int> v;
		int r = 0;
		
		for (string s : ops)
		{
			int t1 = 0, t2 = 0;
			
			switch (s[0])
			{
				case '+':
				t1 = v.top();
				v.pop();
				t2 = v.top() + t1;
				r += t2;
				v.push(t1);
				v.push(t2);
				break;

				case 'D':
				v.push(v.top() * 2);
				r += v.top();
				break;

				case 'C':
				r -= v.top();
				v.pop();
				break;

				default:
				v.push(stoi(s));
				r += v.top();
				break;
			}
		}
		
		return r;
	}
};