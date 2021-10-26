#include <stdio.h>

void sort(int *nums, int numsSize)
{
    int slow, fast;
    int temp;

    for(slow=0; slow<numsSize-1; slow++)
    {
        for(fast=slow+1; fast<numsSize-slow-1; slow++)
        {
            if(nums[slow] > nums[fast])
            {
                temp=nums[slow];
                nums[slow]=nums[fast];
                nums[fast]=temp;
            }
        }
    }
}


int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    sort(a,10);

    for(int i=0; i<10; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}