// 1684. Count the Number of Consistent Strings
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	int countConsistentStrings(string allowed, vector<string>& words)
	{
		unordered_set<char> allowedSet;

		for (int i = 0; i < allowed.size(); ++i)
		{
			allowedSet.insert(allowed[i]);
		}

		int allowedCount = words.size();

		for (int i = 0; i < words.size(); ++i)
		{
			for (int j = 0; j < words[i].size(); ++j)
			{
				if (allowedSet.count(words[i][j]) == 0)
				{
					--allowedCount;

					break;
				}
			}
		}

		return allowedCount;
	}
};