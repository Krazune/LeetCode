// 717. 1-bit and 2-bit Characters
public class Solution
{
    public bool IsOneBitCharacter(int[] bits)
    {
        int c = 0;
        
        for (int i = bits.Length - 2; i >= 0 && bits[i] == 1; i--) c++;
        
        return (c % 2) == 0;
    }
}