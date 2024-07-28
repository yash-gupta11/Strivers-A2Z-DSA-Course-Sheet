#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&nums,int low,int mid,int high,int &count){
        int n1 = mid-low+1,n2 = high-mid;
        vector<int> left(n1),right(n2);
        for(int i = low;i <= mid;i++){
            left[i-low] = nums[i];
        }
        for(int i = mid+1;i <= high;i++){
            right[i-mid-1] = nums[i];
        }
        int i = 0,j = 0;
        int index = low;
        while(i < n1 && j < n2){
            if(left[i] <= right[j])
                nums[index++] = left[i++];
            else
                nums[index++] = right[j++];
            
        }
        while(i < n1)
            nums[index++] = left[i++];
        while(j < n2)
            nums[index++] = right[j++];
        j = 0;
        i = 0;
        for(int i = 0;i < n1;i++){
            while(j < n2 && left[i] > (long long)2 * right[j]){
                count += n1 - i;
                j++;
            }  
        }

        

        

    }
    void mergesort(vector<int>&nums,int low,int high,int &count){
        if(low < high){
            int mid = (low + high)/2;
            mergesort(nums,low,mid,count);
            mergesort(nums,mid+1,high,count);
            merge(nums,low,mid,high,count);
        }
    }
    int reversePairs(vector<int>& nums) {
        int count = 0;
        mergesort(nums,0,nums.size()-1,count); 
        return count;   
    }   
int main(){
    vector<int> nums = {1,3,2,3,1};
    cout<<reversePairs(nums);
    return 0;
}