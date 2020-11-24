// 1662. Check If Two String Arrays are Equivalent
#include <vector>
#include <string>

using namespace std;

class Solution
{
	public:
	bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
	{
		string fullWord1;

		for (int i = 0; i < word1.size(); ++i)
		{
			fullWord1 += word1[i];
		}

		string fullWord2;

		for (int i = 0; i < word2.size(); ++i)
		{
			fullWord2 += word2[i];
		}

		return fullWord1 == fullWord2;
	}
};