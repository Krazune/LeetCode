// 811. Subdomain Visit Count
#include <vector>
#include <string>
#include <unordered_map>

class Solution
{
	public:
	vector<string> subdomainVisits(vector<string>& cpdomains)
	{
		unordered_map<string, int> d;
		vector<string> r;
		
		for (string s : cpdomains)
		{
			string n, w;
			int c = 0, i = 0;
			
			for (; s[i] != ' '; i++) n += s[i];
			
			c = stoi(n);
			
			for (int j = s.size() - 1; j > i; j--)
			{
				if (s[j] == '.') d[w] += c;
					
				w = s[j] + w;
			}

			d[w] += c;
		}
		
		for (auto i = d.begin(); i != d.end(); i++) r.push_back(to_string(i->second) + ' ' + i->first);
		
		return r;
	}
};