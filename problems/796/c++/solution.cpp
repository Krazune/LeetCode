// 796. Rotate String
#include <string>

using namespace std;

class Solution
{
	public:
	bool rotateString(string A, string B)
	{
		return A.size() == B.size() && (A + A).find(B) != string::npos;
	}
};