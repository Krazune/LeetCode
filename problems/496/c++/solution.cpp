// 496. Next Greater Element I
#include <vector>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution
{
    public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums)
    {
        vector<int> r;
        stack<int> s;
        unordered_map<int, int> g;
        
        for (int n : nums)
        {
            while (s.size() > 0 && s.top() < n)
            {
                g[s.top()] = n;
                s.pop();
            }
            
            s.push(n);
        }
        
        for (int n : findNums) r.push_back(g.count(n) > 0 ? m[n] : -1);
        
        return r;
    }
};