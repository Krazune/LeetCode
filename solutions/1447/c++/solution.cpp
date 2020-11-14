// 1447. Simplified Fractions
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	vector<string> simplifiedFractions(int n)
	{
		vector<string> fractions;
		unordered_set<float> previousFractions;

		for (int denominator = 1; denominator <= n; ++denominator)
		{
			for (int numerator = denominator - 1; numerator > 0; --numerator)
			{
				float result = static_cast<float>(numerator) / static_cast<float>(denominator);

				if (!previousFractions.insert(result).second)
				{
					continue;
				}

				string newFraction = to_string(numerator) + '/' + to_string(denominator);

				fractions.push_back(newFraction);
			}
		}

		return fractions;
	}
};