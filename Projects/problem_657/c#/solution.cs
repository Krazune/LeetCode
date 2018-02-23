// 657. Judge Route Circle
public class Solution
{
    public bool JudgeCircle(string moves)
    {
        int x = 0, y = 0;
        
        foreach (char c in moves)
        {
            if (c == 'U') y++;
            else if (c == 'L') x--;
            else if (c == 'D') y--;
            else x++;
        }
        
        return x == 0 && y == 0;
    }
}
