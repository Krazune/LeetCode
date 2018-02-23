// 520. Detect Capital
#include <string.h>
#include <ctype.h>

int detectCapitalUse(char* word)
{
    int l = strlen(word);
    
    if (l < 2)
    {
        return 1;
    }
    
    if (isupper(word[0]))
    {
        if (isupper(word[1]))
        {
            int i = 2;
            for ( ; i < l; i++)
            {
                if (islower(word[i]))
                {
                    return 0;
                }
            }
            
            return 1;
        }
        else
        {
            int i = 2;
            for ( ; i < l; i++)
            {
                if (isupper(word[i]))
                {
                    return 0;
                }
            }
            
            return 1;
        }
    }
    else
    {
        int i = 1;
        for ( ; i < l; i++)
        {
            if (isupper(word[i]))
            {
                return 0;
            }
        }
        
        return 1;
    }
}
