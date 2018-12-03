// 27. Remove Element
int removeElement(int* numbers, int size, int value)
{
	int offset = 0;

	for (int index = 0; index < size; index++)
	{
		if (numbers[index] == value)
		{
			offset++;
		}
		else if (offset > 0)
		{
			numbers[index - offset] = numbers[index];
		}
	}

	return size - offset;
}