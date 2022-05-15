#include <stdio.h>

int RemoveDuplicates(int *nums, int numsSize)
{   
    int right,left;
    right=left=0;

    for(right=0; right<numsSize; right++)
    {
        if(nums[right] == nums[left])
        {
            continue;
        }else
        {
            left++;
            nums[left] = nums[right];
        }

    }

    return left+1;

}


int main()
{
    int nums[10]= {0,0,1,1,1,2,2,3,3,4};

    printf("%d", RemoveDuplicates(nums, 10));

}