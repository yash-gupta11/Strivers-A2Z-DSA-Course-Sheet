#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int n =  nums.size();
        int index= 0;
        for(int i = 0;i < n;i++){
            if(nums[i] != 0)
                nums[index++] = nums[i];
        }
        while(index < n){
            nums[index++] = 0;
        }
    }
int main(){
    vector<int> arr = {0,2,0,3,0,4,7};
    for(auto i : arr)
        cout<<i<<" ";
    moveZeroes(arr);
    cout<<endl<<"After moving zeroes"<<endl;
    for(auto i : arr)
        cout<<i<<" ";
    return 0;
}