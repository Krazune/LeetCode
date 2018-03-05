// 35. Search Insert Position
using System;

public class Solution
{
	public int SearchInsert(int[] numbers, int target)
	{
		int l = 0, r = numbers.Length - 1;

		while (l <= r)
		{
			int m = l + (r - l) / 2;

			if (numbers[m] == target) return m;
			else if (numbers[m] > target) r = m - 1;
			else l = m + 1;
		}

		return l;
	}
}