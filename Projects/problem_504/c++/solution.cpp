// 504. Base 7
class Solution
{
    public:
    string convertToBase7(int num)
    {
        if (num == 0) return "0";
        
        int a = abs(num);
        string r;
        
        while (a != 0)
        {
            r = to_string(a % 7) + r;
            a /= 7;
        }
        
        if (num < 0) r = '-' + r;
        
        return r;
    }
};