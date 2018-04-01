// 27. Remove Element
int removeElement(int* numbers, int size, int value)
{
	int o = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] == value) o++;
		else if (o > 0) numbers[i - o] = numbers[i];
	}
	
	return size - o;
}
