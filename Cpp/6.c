/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
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
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
myqsort(nums1,0,nums1Size-1);
myqsort(nums2,0,nums2Size-1);
int i=0,j=0,k=0,len=nums1Size<nums2Size?nums1Size:nums2Size,*ans=(int*)malloc(sizeof(int)*len);
while(i<nums1Size&&j<nums2Size)
{
    if(nums1[i]==nums2[j])
    {
        ans[k++]=nums1[i];
        i++;
        j++;
    }
    else if(nums1[i]>nums2[j])
        j++;
    else
        i++;
}
*returnSize=k;
return ans;
}

