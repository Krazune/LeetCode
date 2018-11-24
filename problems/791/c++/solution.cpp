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
				for (int i = characterFound->second; i > 0; --i)
				{
					sortedString += character;
				}

				characterOccurrences.erase(character);
			}
		}

		for (unordered_map<char, int>::iterator i = characterOccurrences.begin(); i != characterOccurrences.end(); advance(i, 1))
		{
			for (int j = i->second; j > 0; --j)
			{
				sortedString += i->first;
			}
		}

		return sortedString;
	}
};