#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1,last = -1;
        int s = 0,e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                first = mid;
                e = mid-1;
            }
            else if(nums[mid] < target)
                s = mid+1;
            else
                e = mid-1;
        }    
        if(first == -1)
            return {-1,-1};
        s = 0;
        e = nums.size()-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                last = mid;
                s = mid+1;
            }
            else if(nums[mid] < target)
                s = mid+1;
            else
                e = mid-1;
        } 
        return {first,last};
    }    
int main(){
    vector<int>  nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> ans = searchRange(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}