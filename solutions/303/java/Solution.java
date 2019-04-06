// 303. Range Sum Query - Immutable
class NumArray
{
	int[] sums;

	public NumArray(int[] nums)
	{
		sums = new int[nums.length + 1];
		sums[0] = 0;

		for (int valueIndex = 0; valueIndex < nums.length; ++valueIndex)
		{
			sums[valueIndex + 1] = sums[valueIndex] + nums[valueIndex];
		}
	}

	public int sumRange(int i, int j)
	{
		return sums[j + 1] - sums[i];
	}
}