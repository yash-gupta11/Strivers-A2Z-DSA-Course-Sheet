#include<bits/stdc++.h>
using namespace std;
vector<int> getFloorAndCeil(int x, vector<int> arr) {
        // code here
        int flo = -1,cel = INT_MAX;
        for(int i = 0;i < arr.size();i++){
            if(arr[i] == x){
                return {x,x};
            }
            else if(arr[i] < x){
                flo = max(flo,arr[i]);
            }
            else{
                cel = min(cel,arr[i]);
            }
        }
        if(cel == INT_MAX)
            cel = -1;
        return {flo,cel};
    }   
int main(){
    int x = 7 ;
    vector<int> arr = {5, 6, 8, 9, 6, 5, 5, 6};
    vector<int> ans = getFloorAndCeil(x,arr);
    for(int i : ans)
        cout<<i<<" ";
    return 0;
}