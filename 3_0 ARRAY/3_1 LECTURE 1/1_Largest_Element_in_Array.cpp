#include<iostream>
#include<vector>
using namespace std;
int largest(vector<int> &arr, int n)
    {
        int maxi = arr[0];
        for(int i = 1;i < n;i++){
            if(arr[i] > maxi)
                maxi = arr[i];
        }
        return maxi;
    }   
int main(){
    
    vector<int> arr = {3,2,5,1,9};
    int n = arr.size();
    int maxi = largest(arr,n);
    cout<<"maximum of array : "<<maxi;
    return 0;
}