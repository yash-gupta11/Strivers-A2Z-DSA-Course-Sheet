#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& nums,int start,int end){
        while(start < end){
            swap(nums[start++],nums[end--]);
        }
    }
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k%n;
    reverse(nums,n-k,n-1);
    reverse(nums,0,n-k-1);
    reverse(nums,0,n-1);
}    
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    for(auto i : arr)
        cout<<i<<" ";
    cout<<endl<<"After Rotation"<<endl;
    rotate(arr,k);
    for(auto i : arr)
        cout<<i<<" ";
    return 0;
}