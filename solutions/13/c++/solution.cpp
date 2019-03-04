// 13. Roman to Integer
#include <unordered_map>

using namespace std;

class Solution
{
	public:
	int romanToInt(string s)
	{
		int integer = 0;
		unordered_map<char, int> symbolValues
		({
			{ 'I', 1 },
			{ 'V', 5 },
			{ 'X', 10 },
			{ 'L', 50 },
			{ 'C', 100 },
			{ 'D', 500 },
			{ 'M', 1000	}
		});

		for (int index = 0; index < s.size(); ++index)
		{
			int currentValue = symbolValues[s[index]];
			int nextValue = 0;

			if (index < s.size() - 1)
			{
				nextValue = symbolValues[s[index + 1]];
			}

			if (currentValue < nextValue)
			{
				integer += nextValue - currentValue;
				++index;
			}
			else
			{
				integer += currentValue;
			}
		}

		return integer;
	}
};