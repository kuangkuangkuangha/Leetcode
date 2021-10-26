#include <stdio.h>

void maopao(int *nums, int numsSize)
{   
    int slow,fast;
    int temp;

    for(slow=0; slow<numsSize-1; slow++)
    {
        for(fast=0; fast<numsSize-slow-1; fast++)
        {
            if(nums[fast]>nums[fast+1])
            {
                temp=nums[fast];
                nums[fast]=nums[fast+1];
                nums[fast+1]=temp;
            }
        }
    }
}   


int main()
{
    int a[2]={1,1};
    maopao(a,2);

    for(int i=0; i<2; i++)
    {
        printf("%d", a[i]);
    }

}


void myqsort(int *a,int left,int right)//快速排序函数
{
    if(left>right)
        return;
    int temp=a[left],i=left,j=right,t;
    while(i!=j)
    {
        while(i<j&&a[j]>=temp)
            j--;
        while(i<j&&a[i]<=temp)
            i++;
        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    a[left]=a[i];
    a[i]=temp;
    myqsort(a,left,i-1);
    myqsort(a,i+1,right);
}
