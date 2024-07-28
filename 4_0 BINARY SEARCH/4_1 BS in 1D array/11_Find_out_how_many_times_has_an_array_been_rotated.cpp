#include<bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &nums) {
        // Code Here
        int n = nums.size();
        if(nums[0] < nums[n-1])
            return 0;
        int s =  0,e= n-1;
        if(n == 1)
            return 0;
        while(s <= e){
            int mid = (s+e)/2;
            if(mid > 0 && nums[mid] < nums[mid-1])
                return mid;
            
            if(nums[mid] >= nums[0]){
                s = mid+1;
            }else
                e = mid-1;
        }
        return -1;
    }    
int main(){
    vector<int> arr = {5, 1, 2, 3, 4};
    cout<<findKRotation(arr);
    return 0;
}