#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int &target) {
        int s = 0,e = nums.size()-1;
        while(s <= e){
            int mid = (s+e)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return -1;
    }    
int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout<<search(nums,target);
    return 0;
}