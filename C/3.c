#include <stdio.h>
#include <string.h>

void rotate(int *nums, int numsSize, int k)
{
    int temp[k];
    memcpy(temp, nums, sizeof(nums));

    // k<numsSize
    for(int i=0; i<numsSize-k; i++)
    {
        nums[i+k] = nums[i];
    }

    for(int j=0; j<k; j++)
    {
        nums[j] = temp[numsSize-k];
    }

}