// 412. Fizz Buzz
using System;
using System.Collections;

public class Solution
{
    public IList<String> FizzBuzz(int quantity)
    {
        IList<String> wordList = new List<String>();

        for (int number = 0, fizz = 1, buzz = 1; number < quantity; number++, fizz++, buzz++)
        {
            if (fizz == 3)
            {
                wordList.Add("Fizz");
                fizz = 0;
                
                if (buzz == 5)
                {
                    wordList[number] += "Buzz";
                    buzz = 0;
                }
            }
            else if (buzz == 5)
            {
                wordList.Add("Buzz");
                buzz = 0;
            }
            else
            {
                wordList.Add((number + 1).ToString());
            }
        }
        return wordList;
    }
}
