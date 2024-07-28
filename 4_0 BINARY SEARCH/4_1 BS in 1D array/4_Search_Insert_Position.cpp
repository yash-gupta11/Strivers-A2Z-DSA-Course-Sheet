#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int s = 0,e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                s = mid+1;
            else
                e = mid-1;
        }    
        return s;
    }   
int main(){
    vector<int> nums = {1,3,5,6};
    int target = 5;
    cout<<searchInsert(nums,target);
    return 0;
}