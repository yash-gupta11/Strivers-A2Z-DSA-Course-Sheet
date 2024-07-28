#include<iostream>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 1){
                count++;
                maxcount = max(maxcount,count);
            }
            else
                count = 0  ;
        }
        return maxcount;
    } 
int main(){
    vector<int> arr = {0,0,1,1,1,1,0,1,1,1,1,1,1,1,1};
    cout<<findMaxConsecutiveOnes(arr);
    return 0;
}