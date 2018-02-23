// 724. Find Pivot Index
#include <vector>

class Solution
{
    public:
    int pivotIndex(vector<int>& nums)
    {
        int l = 0, r = 0;
        
        for (int i = 0; i < nums.size(); i++) r += nums[i];
        
        for (int i = 0; i < nums.size(); i++)
        {
            r -= nums[i];
            if (r == l) return i;
            l += nums[i];
        }
        
        return -1;
    }
};
