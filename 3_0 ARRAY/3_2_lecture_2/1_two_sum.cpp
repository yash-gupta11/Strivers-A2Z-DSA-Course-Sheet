#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            
            if(mp.find(target - nums[i]) != mp.end())
                return {mp[target - nums[i]],i};
            mp[nums[i]] = i;
        }
        return {0,0};
    }   
int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> ans = twoSum(nums,target);
    cout<<ans[0]<<"  "<<ans[1];
    return 0;
}