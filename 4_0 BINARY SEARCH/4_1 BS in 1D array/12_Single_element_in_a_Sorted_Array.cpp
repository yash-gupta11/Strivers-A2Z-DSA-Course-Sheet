#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0,e = n-1;
        if(n == 1)
            return nums[0];
        while(s <= e){
            int mid = (s + e)/2;
            if(mid == 0 && nums[mid] != nums[mid+1])
                return nums[mid];
            if(mid == n-1 && nums[mid] != nums[mid-1])
                return nums[mid];
            if(nums[mid+1] != nums[mid] && nums[mid-1] != nums[mid])
                return nums[mid];

            if((mid%2 == 0 && mid+1 < n && nums[mid+1] == nums[mid]) || (mid%2 == 1 && mid-1 >= 0 && nums[mid-1] == nums[mid]))
                s = mid+1;
            else
                e = mid-1;
        }
        return -1;
    }   
int main(){
    vector<int>  nums = {1,1,2,3,3,4,4,8,8};
    cout<<singleNonDuplicate(nums);
    return 0;
}