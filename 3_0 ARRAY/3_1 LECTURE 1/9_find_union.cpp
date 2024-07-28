#include<iostream>
#include<vector>
using namespace std;
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> uni;
        int i = 0,j = 0;
        while(i < n && j < m){
            if(arr1[i] <= arr2[j]){
                if(uni.empty() || uni.back() != arr1[i])
                    uni.push_back(arr1[i]);
                i++;
            }else{
                if(uni.empty() || uni.back() != arr2[j])
                    uni.push_back(arr2[j]);
                j++;
            }
        }
        while(i < n){
            if(uni.empty() || uni.back() != arr1[i])
                    uni.push_back(arr1[i]);
                i++;
        }
            
        while(j < m){
            if(uni.empty() || uni.back() != arr2[j])
                    uni.push_back(arr2[j]);
                j++;
        }
            
        return uni;
    } 
int main(){
    int arr1[] = {3,4,6,6,7,8,9,9,10},n= 9;
    int arr2[] = {5,6,6,6,7,7,8,111,123},m = 9;
    vector<int> ans = findUnion(arr1,arr2,n,m);
    for(auto i : ans)
        cout<<i<<" ";
    return 0;
}