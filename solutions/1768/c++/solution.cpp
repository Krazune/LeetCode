// 1768. Merge Strings Alternately
#include <string>

using namespace std;

class Solution
{
	public:
	string mergeAlternately(string word1, string word2)
	{
		string result;

		for (int i = 0;; ++i)
		{
			bool isComplete = true;

			if (i < word1.size())
			{
				result += word1[i];

				isComplete = false;
			}

			if (i < word2.size())
			{
				result += word2[i];

				isComplete = false;
			}

			if (isComplete)
			{
				break;
			}
		}

		return result;
	}
};