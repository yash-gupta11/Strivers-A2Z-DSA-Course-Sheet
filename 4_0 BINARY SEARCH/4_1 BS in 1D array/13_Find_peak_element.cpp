#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0,e = n-1;  
        if(n == 1)
            return 0;
        while(s <= e){
            int mid = (s+e)/2;
            if(mid == 0 && nums[mid] > nums[mid+1])
                return mid;
            else if(mid == n-1 && nums[mid] > nums[mid-1])
                return mid;
            else if(mid-1 >= 0 && nums[mid] > nums[mid-1] && mid+1 < n && nums[mid] > nums[mid+1])
                return mid;

            if(mid+1 < n && nums[mid+1] > nums[mid])
                s = mid+1;
            else if (mid-1 >= 0 && nums[mid-1] > nums[mid])
                e = mid-1;
            
            
        }
        return -1;
    }    
int main(){
    vector<int> nums = {1,2,3,1};
    cout<<findPeakElement(nums);
    return 0;
}