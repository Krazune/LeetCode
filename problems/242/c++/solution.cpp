// 242. Valid Anagram
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	bool isAnagram(string s, string t)
	{
		if (s.size() != t.size()) return false;
		
		unordered_map<char, int> l;
		
		for (int i = 0; i < s.size(); i++)
		{
			l[s[i]]++;
			l[t[i]]--;
		}
		
		for (auto i : l)
		{
			if (i.second != 0) return false;
		}
		
		return true;
	}
};