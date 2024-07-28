#include<bits/stdc++.h>
using namespace std;
int findFloor(vector<int> v, int n, int x) {

        // Your code here
        
        int s = 0,e = n-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(v[mid] == x)
                return mid;
            else if(v[mid] > x){
                e = mid-1;
            }
            else
                s = mid + 1;
        }
        return e;
    }    
int main(){
    int n = 7, x = 13;
    vector<int> arr = {1,2,8,10,11,12,19};
    cout<<findFloor(arr,n,x);
    return 0;
}