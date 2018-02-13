// 520. Detect Capital
#include <string.h>
#include <ctype.h>

int detectCapitalUse(char* word)
{
    int wordLength = strlen(word);
    
    if (wordLength < 2)
    {
        return 1;
    }
    
    if (isupper(word[0]))
    {
        if (isupper(word[1]))
        {
            int index = 2;
            for ( ; index < wordLength; index++)
            {
                if (islower(word[index]))
                {
                    return 0;
                }
            }
            
            return 1;
        }
        else
        {
            int index = 2;
            for ( ; index < wordLength; index++)
            {
                if (isupper(word[index]))
                {
                    return 0;
                }
            }
            
            return 1;
        }
    }
    else
    {
        int index = 1;
        for ( ; index < wordLength; index++)
        {
            if (isupper(word[index]))
            {
                return 0;
            }
        }
        
        return 1;
    }
}