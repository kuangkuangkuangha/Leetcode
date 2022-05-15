#include <stdio.h>

void xuanze(int *nums, int numsSize)
{
    int slow, fast;
    int index;
    for(slow=0; slow<numsSize-1; slow++)
    {
        index=slow;
        for(fast=slow+1; fast<numsSize; fast++)
        {
            if(nums[fast]<nums[index])
            {
                index=fast;
            }
        }
        int temp=nums[slow];
        nums[slow]=nums[index];
        nums[index]=temp;
    }
}

int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    xuanze(a,10);
    for(int i=0; i<10; i++)
    {
        printf("%d", a[i]);
    }

}