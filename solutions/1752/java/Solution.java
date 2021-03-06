// 1752. Check if Array Is Sorted and Rotated
class Solution
{
	public boolean check(int[] nums)
	{
		boolean unsortedFound = false;

		for (int i = 1; i < nums.length; ++i)
		{
			if (nums[i] >= nums[i - 1])
			{
				continue;

			}

			if (unsortedFound)
			{
				return false;
			}

			unsortedFound = true;
		}

		if (unsortedFound)
		{
			return nums[nums.length - 1] <= nums[0];
		}

		return true;
	}
}