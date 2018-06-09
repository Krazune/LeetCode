// 744. Find Smallest Letter Greater Than Target
char nextGreatestLetter(char* letters, int lettersSize, char target)
{
	int left = 0;
	int right = lettersSize - 1;

	while (left < right)
	{
		int mid = left + (right - left) / 2;

		if (letters[mid] <= target)
		{
			left = mid + 1;
		}
		else
		{
			right = mid;
		}
	}

	if (left == lettersSize - 1 && letters[left] <= target)
	{
		return letters[0];
	}
	else
	{
		return letters[left];
	}
}