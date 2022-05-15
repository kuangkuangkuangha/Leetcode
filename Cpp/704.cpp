#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search( vector<int>& matrix,  int target) {
        int right = nums.size()-1;
        int left = 0;

        while(left<=right)
        {
            int mid = left + (right-left)/2;
            if(nums[mid]==target)
                return mid;
            else if(target<nums[mid])
                right = mid-1;
            else if(target>nums[mid]) 
                left = mid+1;

            
        }
        return -1;
    }
};