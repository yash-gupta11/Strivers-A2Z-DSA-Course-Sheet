#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i < n-2;i++){
            if(i-1 >= 0 && nums[i-1] == nums[i]){
                continue;
            }else{
                int s = i+1,e = n-1;
                while(s < e){
                    if(nums[s] + nums[e] == -nums[i]){
                        ans.push_back({nums[i] , nums[s] , nums[e]});
                        s++;
                        e--;
                        while(s < n && nums[s-1] == nums[s])
                            s++;
                        while(e > i && nums[e+1] == nums[e])
                            e--;
                    }else if(nums[s] + nums[e] < -nums[i]){
                        s++;
                        // while(s < n && nums[s-1] == nums[s])
                        //     s++;
                    }
                    else{
                        e--;
                        // while(e > i && nums[e+1] == nums[e])
                        //     e--;
                    }
                }
            }
            
        }
        return ans;

    }   
int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threesum(nums);
    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}