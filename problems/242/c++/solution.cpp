// 242. Valid Anagram
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	bool isAnagram(string s, string t)
	{
		if (s.size() != t.size())
		{
			return false;
		}

		unordered_map<char, int> charactersCount;

		for (int index = 0; index < s.size(); index++)
		{
			charactersCount[s[index]]++;
			charactersCount[t[index]]--;
		}

		for (auto iterator : charactersCount)
		{
			if (iterator.second != 0)
			{
				return false;
			}
		}

		return true;
	}
};