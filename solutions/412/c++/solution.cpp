// 412. Fizz Buzz
#include <vector>
#include <string>

using namespace std;

class Solution
{
	public:
	vector<string> fizzBuzz(int n)
	{
		vector<string> results;

		for (int currentNumber = 1; currentNumber <= n; ++currentNumber)
		{
			string currentResult;

			if (currentNumber % 3 == 0)
			{
				currentResult = "Fizz";
			}

			if (currentNumber % 5 == 0)
			{
				currentResult += "Buzz";
			}

			if (currentResult.empty())
			{
				currentResult = to_string(currentNumber);
			}

			results.push_back(currentResult);
		}

		return results;
	}
};