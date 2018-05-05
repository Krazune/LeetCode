// 804. Unique Morse Code Words
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
	public:
	int uniqueMorseRepresentations(vector<string>& words)
	{
		vector<string> morse({".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."});
		unordered_set<string> uniqueMorse;

		for (string word : words)
		{
			string morseRepresentation;

			for (char character : word)
			{
				morseRepresentation += morse[character - 'a'];
			}

			uniqueMorse.insert(morseRepresentation);
		}

		return uniqueMorse.size();
	}
};