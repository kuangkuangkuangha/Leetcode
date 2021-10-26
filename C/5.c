/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

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

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    sort(nums1,nums1Size);
    sort(nums2,nums2Size);

    int a=0,b=0;
    int temp=0;
    int len=nums1Size<nums2Size?nums1Size:nums2Size;

    int *ans=(int *)malloc(sizeof(int)*len);
    while(a<nums1Size && b<nums2Size)
    {
        if(nums1[a] < nums2[b])
        {
            a++;
        }

        if(nums1[a] > nums2[b])
        {
            b++;
        }

        if(nums1[a] == nums2[b])
        {
            ans[temp]=nums1[a];
            temp++;
            a++;
            b++;
        }
    }

    *returnSize = temp;

    return ans;

}