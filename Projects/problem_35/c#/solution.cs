// 35. Search Insert Position
using System;

public class Solution
{
	public int SearchInsert(int[] numbers, int target)
	{
		int targetIndex = 0;

		for ( ; targetIndex < numbers.Length; targetIndex++)
		{
			if (target <= numbers[targetIndex])
			{
				return targetIndex;
			}
		}

		return targetIndex;
	}
}