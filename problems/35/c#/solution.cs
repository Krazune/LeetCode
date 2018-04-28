// 35. Search Insert Position
using System;

public class Solution
{
	public int SearchInsert(int[] numbers, int target)
	{
		int low = 0;
		int high = numbers.Length - 1;

		while (low <= high)
		{
			int middle = low + (high - low) / 2;

			if (numbers[middle] == target)
			{
				return middle;
			}
			else if (numbers[middle] > target)
			{
				high = middle - 1;
			}
			else
			{
				low = middle + 1;
			}
		}

		return low;
	}
}