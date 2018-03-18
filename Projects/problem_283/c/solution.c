// 283. Move Zeroes
void moveZeroes(int* numbers, int size)
{
	for (int o = 0, i = 0; i < size; i++)
	{
		if (numbers[i] == 0) o++;
		else if (o > 0)
		{
			numbers[i - o] = numbers[i];
			numbers[i] = 0;
		}
	}
}
