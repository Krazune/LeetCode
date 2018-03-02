// 405. Convert a Number to Hexadecimal
#include <string>

using namespace std;

class Solution
{
    public:
    string toHex(int num)
    {
        if (num == 0) return "0";
        
        string h;
        const char d[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        unsigned int n = num;
            
        while (n != 0)
        {
            h = d[n % 16] + h;
            n /= 16;
        }
        
        return h;
    }
};