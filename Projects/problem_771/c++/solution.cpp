// 771. Jewels and Stones
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
    public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> j(jewels.begin(), jewels.end());
        int c = 0;
        
        for (int i = 0; i < stones.size(); i++)
        {
            if (j.count(stones[i]) == 1) c++;
        }
        
        return c;
    }
};
