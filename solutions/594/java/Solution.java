// 594. Longest Harmonious Subsequence
import java.util.HashMap;
import java.util.Map;

public class Solution
{
	public int findLHS(int[] nums)
	{
		Map<Integer, Integer> numberCounts = new HashMap<>();

		for (int i = 0; i < nums.length; ++i)
		{
			numberCounts.put(nums[i], numberCounts.getOrDefault(nums[i], 0) + 1);
		}

		int longestLength = 0;

		for (Map.Entry<Integer, Integer> numberCount : numberCounts.entrySet())
		{
			int nextNumberCount = numberCounts.getOrDefault(numberCount.getKey() + 1, 0);

			if (nextNumberCount == 0)
			{
				continue;
			}

			int currentLength = numberCount.getValue() + nextNumberCount;

			if (currentLength > longestLength)
			{
				longestLength = currentLength;
			}
		}

		return longestLength;
	}
}