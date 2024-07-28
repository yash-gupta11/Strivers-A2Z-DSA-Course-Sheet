#include<bits/stdc++.h>
using namespace std;
long long int merge(long long int arr[],int s,int mid,int h){
        long long int count = 0;
        
        int n1 = mid-s+1,n2 = h-mid;
        long long int left[n1],right[n2];
        
        for(int i = s;i <= mid;i++){
            left[i-s] = arr[i];
        }
        for(int i = mid+1;i <= h;i++){
            right[i-mid-1] = arr[i];
        }
        
        int i = 0,j = 0,index = s;
        while(i < n1 && j < n2){
            if(left[i] <= right[j]){
                arr[index++] = left[i++];
            }
            else{
                count += n1 - i;
                arr[index++] = right[j++];
            }
        }
        while(i < n1){
            arr[index++] = left[i++];
        }
        while(j < n2){
            arr[index++] = right[j++];
        }
        return count;
    }
    long long int mergesort(long long arr[],int s,int h){
        long long int res = 0;
        if(s < h){
            int mid = (h+s)/2;
            res += mergesort(arr,s,mid);
            res += mergesort(arr,mid+1,h);
            res += merge(arr,s,mid,h);
        }
        return res;
    }
    long long int inversionCount(long long arr[], int n) {
        // Your Code Here
        long long int count =  mergesort(arr,0,n-1);
        // for(int i = 0;i < n;i++){
        //     cout<<arr[i]<<" ";
        // }
        return count;
        // return count;
    }    
int main(){
    int n = 5;
    vector<long long> arr= {2, 4, 1, 3, 5};
    cout<<inversionCount(arr,n);
    return 0;
}