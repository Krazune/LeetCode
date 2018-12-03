// 383. Ransom Note
#include <string>

using namespace std;

class Solution
{
	public:
	bool canConstruct(string ransomNote, string magazine)
	{
		if (ransomNote.size() > magazine.size())
		{
			return false;
		}

		int letterCounts[26] = { 0 };

		for (int index = 0; index < magazine.size(); index++)
		{
			letterCounts[magazine[index] - 'a']++;
		}

		for (int index = 0; index < ransomNote.size(); index++)
		{
			if (--letterCounts[ransomNote[index] - 'a'] < 0)
			{
				return false;
			}
		}

		return true;
	}
};