// 27. Remove Element
int removeElement(int* numbers, int size, int value)
{
    int offset = 0;
    int index = 0;
    
    for ( ; index < size; index++)
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