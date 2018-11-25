// 791. Custom Sort String
#include <string>
#include <unordered_map>
#include <iterator>

using namespace std;

class Solution
{
	public:
	string customSortString(string S, string T)
	{
		unordered_map<char, int> characterOccurrences;

		for (char character : T)
		{
			++characterOccurrences[character];
		}

		string sortedString;

		for (char character : S)
		{
			unordered_map<char, int>::iterator characterFound = characterOccurrences.find(character);

			if (characterFound != characterOccurrences.end())
			{
				for (int counter = characterFound->second; counter > 0; --counter)
				{
					sortedString += character;
				}

				characterOccurrences.erase(character);
			}
		}

		for (unordered_map<char, int>::iterator characterIterator = characterOccurrences.begin(); characterIterator != characterOccurrences.end(); advance(characterIterator, 1))
		{
			for (int counter = characterIterator->second; counter > 0; --counter)
			{
				sortedString += characterIterator->first;
			}
		}

		return sortedString;
	}
};