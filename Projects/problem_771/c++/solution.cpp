// 771. Jewels and Stones
#include <unordered_set>

class Solution
{
    public:
    int numJewelsInStones(string jewels, string stones)
    {
        std::unordered_set<char> jewelsSet(jewels.begin(), jewels.end());
        int jewelCount = 0;
        
        for (int index = 0; index < stones.size(); index++)
        {
            if (jewelsSet.count(stones[index]) == 1)
            {
                jewelCount++;
            }
        }
        
        return jewelCount;
    }
};