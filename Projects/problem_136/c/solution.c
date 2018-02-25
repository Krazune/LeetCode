// 136. Single Number
int singleNumber(int* nums, int numsSize)
{
    int i = 1;
    
    for ( ; i < numsSize; i++) nums[0] ^= nums[i];
    
    return nums[0];
}