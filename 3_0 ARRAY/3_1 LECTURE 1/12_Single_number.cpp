#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int xxor = 0;
        for(auto i : nums)
            xxor ^= i;
        return xxor;
    }   
int main(){
    vector<int> nums = {2,2,3,4,5,5,4,3,1};
    cout<<singleNumber(nums);
    return 0;
}