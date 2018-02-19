// 389. Find the Difference
char findTheDifference(char* s, char* t)
{
        int n = 0;
        int i = 0;
        
        for (; s[i] != 0; i++)
        {
            n -= s[i];
            n += t[i];
        }
    
        return (n + t[i]);
}