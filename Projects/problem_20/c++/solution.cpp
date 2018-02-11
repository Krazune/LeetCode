// 20. Valid Parentheses
#include <string>
#include <stack>

class Solution
{
    public:
    bool isValid(std::string symbols)
    {
        std::stack<char> symbolOrder;
        
        if (symbols.size() % 2 == 0)
        {
            for (char symbol : symbols)
            {
                if (symbol == '(')
                {
                    symbolOrder.push(')');
                    continue;
                }
                else if (symbol == '[')
                {
                    symbolOrder.push(']');
                    continue;
                }
                else if (symbol == '{')
                {
                    symbolOrder.push('}');
                    continue;
                }
                else
                {
                    if (symbolOrder.size() == 0 || symbolOrder.top() != symbol)
                    {
                        return false;
                    }
                    symbolOrder.pop();
                }
            }

            if (symbolOrder.size() == 0)
            {
                return true;
            }
        }
        
        return false;
    }
};