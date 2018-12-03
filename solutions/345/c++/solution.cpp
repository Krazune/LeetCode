// 345. Reverse Vowels of a String
#include <string>
#include <cctype>
#include <utility>

using namespace std;

class Solution
{
	public:
	string reverseVowels(string inputString)
	{
		for (int low = 0, high = inputString.size() - 1; low < high; )
		{
			char lowLower = tolower(inputString[low]);
			char highLower = tolower(inputString[high]);

			if (lowLower == 'a' || lowLower == 'e' || lowLower == 'i' || lowLower == 'o' || lowLower == 'u')
			{
				if (highLower == 'a' || highLower == 'e' || highLower == 'i' || highLower == 'o' || highLower == 'u')
				{
					swap(inputString[low], inputString[high]);

					low++;
				}

				high--;
			}
			else
			{
				if (highLower != 'a' && highLower != 'e' && highLower != 'i' && highLower != 'o' && highLower != 'u')
				{
					high--;
				}

				low++;
			}
		}

		return inputString;
	}
};