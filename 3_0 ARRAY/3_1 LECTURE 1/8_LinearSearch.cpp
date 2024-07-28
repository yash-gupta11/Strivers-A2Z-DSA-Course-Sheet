#include<iostream>
using namespace std;
int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
        int s = 0,e = N-1;
        while(s <= e){
            int mid = (e-s)/2 + s;
            if(arr[mid] == K)
                return 1;
            if(arr[mid] < K)
                s = mid+1;
            else
                e = mid-1;
            
       }
       return -1;
       
    }    
int main(){
    int arr[] = {0,2,3,4,5,6,7};
    
    cout<<searchInSorted(arr,7,5);
    
    return 0;
}