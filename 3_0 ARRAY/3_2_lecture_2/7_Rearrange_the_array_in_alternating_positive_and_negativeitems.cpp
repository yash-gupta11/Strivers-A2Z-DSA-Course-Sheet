#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int pos = 0,neg =1;
        for(auto i : nums){
            if(i < 0){
                ans[neg] = i;
                neg += 2;
            }
            else{
                ans[pos] = i;
                pos += 2;
            }

        }
        return ans;
    }   
int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> ans = rearrangeArray(nums);
    for(int i : ans)
    cout<<i<<" ";
    return 0;
}