// 283. Move Zeroes
void moveZeroes(int* numbers, int size)
{
    int offset = 0;
    int index = 0;
    
    for ( ; index < size; index++)
    {
        if (numbers[index] == 0)
        {
            offset++;
        }
        else if (offset > 0)
        {
            {
                numbers[index - offset] = numbers[index];
                numbers[index] = 0;
            }
        }
    }
}