// 205. Isomorphic Strings
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	bool isIsomorphic(string s, string t)
	{
		unordered_map<char, int> sLastOccurrences;
		unordered_map<char, int> tLastOccurrences;

		for (int index = 0; index < s.size(); index++)
		{
			if (sLastOccurrences[s[index]] != tLastOccurrences[t[index]])
			{
				return false;
			}

			sLastOccurrences[s[index]] = index + 1;
			tLastOccurrences[t[index]] = index + 1;
		}

		return true;
	}
};