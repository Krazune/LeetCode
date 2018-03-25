// 500. Keyboard Row
#include <vector>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

class Solution
{
	public:
	vector<string> findWords(vector<string>& words)
	{
		vector<string> r;
		vector<unordered_set<char>> l({{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'}, {'z', 'x', 'c', 'v', 'b', 'n', 'm'}});

		for (string s : words)
		{
			if (s.empty()) continue;

			int t = 0;
			bool v = true;
			char c = tolower(s[0]);

			for (int i = 0; i < l.size(); i++)
			{
				if (l[i].find(c) != l[i].end()) t = i;
			}

			for (int i = 1; i < s.size(); i++)
			{
				if (l[t].find(tolower(s[i])) == l[i].end())
				{
					v = false;
					break;
				}
			}

			if (v) r.push_back(s);
		}

		return r;
	}
};