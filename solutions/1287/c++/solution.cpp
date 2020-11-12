// 1287. Element Appearing More Than 25% In Sorted Array
class Solution
{
	public:
	int findSpecialInteger(vector<int>& arr)
	{
		int minimumCountNeeded = arr.size() / 4;

		for (int i = 0; i < arr.size() - minimumCountNeeded; ++i)
		{
			if (arr[i] == arr[i + minimumCountNeeded])
			{
				return arr[i];
			}
		}

		return -1;
	}
};