// 26. Remove Duplicates from Sorted Array
int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize  < 2)
    {
        return numsSize;
    }
    
    int o = 0;
    
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            o++;
        }
        else
        {
            nums[i - o] = nums[i];
        }
    }
    
    return numsSize - o;
}