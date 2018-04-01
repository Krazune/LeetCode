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
		vector<string> m({".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."});
		unordered_set<string> r;
		
		for (string s : words)
		{
			string w;
			
			for (char c : s) w += m[c - 'a'];
			
			r.insert(w);
		}
		
		return r.size();
	}
};