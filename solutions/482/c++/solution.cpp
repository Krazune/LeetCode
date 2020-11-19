// 482. License Key Formatting
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

class Solution
{
	public:
	string licenseKeyFormatting(string S, int K)
	{
		string result;
		int alphanumericDone = 0;

		for (int i = S.size() - 1; i >= 0; --i)
		{
			if (S[i] == '-')
			{
				continue;
			}

			if (alphanumericDone > 0 && alphanumericDone % K == 0)
			{
				result += '-';
			}

			result += toupper(S[i]);
			++alphanumericDone;
		}

		reverse(result.begin(), result.end());

		return result;
	}
};