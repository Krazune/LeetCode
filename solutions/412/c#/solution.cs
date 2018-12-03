// 412. Fizz Buzz
using System;
using System.Collections.Generic;

public class Solution
{
	public IList<string> FizzBuzz(int quantity)
	{
		IList<string> numberList = new List<string>();

		for (int index = 0, fizz = 1, buzz = 1; index < quantity; index++, fizz++, buzz++)
		{
			if (fizz == 3)
			{
				numberList.Add("Fizz");
				fizz = 0;

				if (buzz == 5)
				{
					numberList[index] += "Buzz";
					buzz = 0;
				}
			}
			else if (buzz == 5)
			{
				numberList.Add("Buzz");
				buzz = 0;
			}
			else
			{
				numberList.Add((index + 1).ToString());
			}
		}

		return numberList;
	}
}