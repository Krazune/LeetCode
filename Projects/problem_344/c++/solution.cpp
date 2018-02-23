// 344. Reverse String
#include <string>

class Solution
{
    public:
    string reverseString(string s)
    {
        for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        {
            char t = s[i];
            s[i] = s[j];
            s[j] = t;
        }
        
        return s;
    }
};
