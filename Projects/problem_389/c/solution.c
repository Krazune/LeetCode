// 389. Find the Difference
char findTheDifference(char* s, char* t)
{
    int i = 0, n = 0;

    for (; s[i] != 0; i++) n ^= s[i] ^ t[i];

    return (n ^ t[i]);
}
