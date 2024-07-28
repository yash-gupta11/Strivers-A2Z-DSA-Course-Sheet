#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        int majority;
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(count == 0)
                majority = nums[i];
            if(majority == nums[i])
                count++;
            else
                count--;
        }
        return majority;
    }  
int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
    return 0;
}