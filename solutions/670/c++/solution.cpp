// 670. Maximum Swap
#include <string>
#include <unoredered_map>
#include <utility>

using namespace std;

class Solution
{
	public:
	int maximumSwap(int num)
	{
		string numberString = to_string(num);
		unordered_map<int, int> lastDigitMap;

		for (int index = 0; index < numberString.size(); ++index)
		{
			lastDigitMap[numberString[index] - '0'] = index;
		}

		for (int characterIndex = 0; characterIndex < numberString.size() - 1; ++characterIndex)
		{
			for (int digit = 9; digit > numberString[characterIndex] - '0'; --digit)
			{
				int lastDigitIndex = lastDigitMap[digit];

				if (lastDigitIndex > characterIndex)
				{
					swap(numberString[characterIndex], numberString[lastDigitIndex]);

					return stoi(numberString);
				}
			}
		}

		return num;
	}
};