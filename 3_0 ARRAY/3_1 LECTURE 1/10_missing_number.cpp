#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xOr = 0;
        for(int i = 0;i < n;i++){
            xOr = xOr ^ nums[i] ^ i;
        }
        return xOr^n;
    }   
int main(){
    vector<int> arr = {0,5,3,6,2,1};
    cout<<missingNumber(arr);
    return 0;
}