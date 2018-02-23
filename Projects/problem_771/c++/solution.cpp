// 771. Jewels and Stones
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
    public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> jewelsSet(jewels.begin(), jewels.end());
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
