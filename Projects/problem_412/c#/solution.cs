// 412. Fizz Buzz
public class Solution
{
	public IList<String> FizzBuzz(int quantity)
	{
		IList<String> wordList = new List<String>();

		for (int number = 0; number < quantity; number++)
		{
			if ((number + 1) % 15 == 0)
			{
				wordList.Add("FizzBuzz");
			}
			else if ((number + 1) % 3 == 0) {
				wordList.Add("Fizz");
			}
			else if ((number + 1) % 5 == 0)
			{
				wordList.Add("Buzz");
			} else
			{
				wordList.Add((number + 1).ToString());
			}
		}
		return wordList;
	}
}