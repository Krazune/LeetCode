// 485. Max Consecutive Ones
#include <vector>

using namespace std;

class Solution
{
    public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int m = 0;
        
        for (int i = 0, t = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                t++;
                
                if (t > m) m = t;
            }
            else t = 0;
        }
        
        return m;
    }
};
