// 389. Find the Difference
public class Solution
{
    public char FindTheDifference(string s, string t)
    {
        int n = 0;
        int i = 0;
        
        for (; i < s.Length; i++)
        {
            n -= s[i];
            n += t[i];
        }
        
        return (char)(n + t[i]);
    }
}