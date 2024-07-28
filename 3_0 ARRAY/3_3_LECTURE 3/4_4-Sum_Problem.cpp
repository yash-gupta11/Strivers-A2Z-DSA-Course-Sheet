#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0;i < n-3;i++){

            if(i-1 >= 0 && nums[i-1] == nums[i])
                continue;
            
            for(int j = i+1;j < n-2 ;j++){

                if(j-1 >= i+1 && nums[j-1] == nums[j])
                continue;

                int s = j+1,e = n-1;
                while(s < e){
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[s] ;
                    sum += nums[e];
                    if(sum == target){
                        ans.push_back({nums[i] ,nums[j],nums[s],nums[e]});
                        s++;
                        e--;
                        while(s < n && nums[s-1] == nums[s])
                            s++;
                        while(e > j && nums[e+1] == nums[e])
                            e--;
                    }else if(sum < target)
                        s++;
                    else
                        e--;
                }
            }
        }
        return ans;
    }   
int main(){
    vector<int>  nums = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> ans = foursum(nums,target);
    return 0;
}