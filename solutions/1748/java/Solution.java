// 1748. Sum of Unique Elements
import java.util.HashMap;

class Solution
{
	public int sumOfUnique(int[] nums)
	{
		HashMap<Integer, Integer> numberOccurences = new HashMap<Integer, Integer>();

		for (int i = 0; i < nums.length; ++i)
		{
			if (numberOccurences.containsKey(nums[i]))
			{
				numberOccurences.put(nums[i], numberOccurences.get(nums[i]) + 1);
			}
			else
			{
				numberOccurences.put(nums[i], 1);
			}
		}

		int sum = 0;

		for (Integer key : numberOccurences.keySet())
		{
			if (numberOccurences.get(key) != 1)
			{
				continue;
			}

			sum += key;
		}

		return sum;
	}
}