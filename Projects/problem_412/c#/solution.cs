// 412. Fizz Buzz
using System;
using System.Collections;

public class Solution
{
    public IList<String> FizzBuzz(int quantity)
    {
        IList<String> l = new List<String>();

        for (int i = 0, f = 1, b = 1; i < quantity; i++, f++, b++)
        {
            if (f == 3)
            {
                l.Add("Fizz");
                f = 0;

                if (b == 5)
                {
                    l[i] += "Buzz";
                    b = 0;
                }
            }
            else if (b == 5)
            {
                l.Add("Buzz");
                b = 0;
            }
            else l.Add((i + 1).ToString());
        }

        return l;
    }
}
