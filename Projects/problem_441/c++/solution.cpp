// 441. Arranging Coins
class Solution
{
    public:
    int arrangeCoins(int number)
    {
        int rows = 0;
        
        while (number >= (rows + 1))
        {
            number -= (rows + 1);
            rows++;
        }
        
        return rows;
    }
};