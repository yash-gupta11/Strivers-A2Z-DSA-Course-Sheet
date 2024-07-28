#include<bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int> > arr) {
        // code here
        int n = arr.size();
        int m = arr[0].size();
        int ans = 0;
        int index= -1;
        for(int i = 0;i < n;i++){
            int s = 0,e = m-1;
            while(s <= e){
                int mid = (s+e)/2;
                if(arr[i][mid] == 1){
                    e = mid-1;
                }else
                    s = mid+1;
            }
            if(s == 0)
                return i;
            int onecount = m-s;
            if(ans < onecount){
                ans = onecount;
                index = i;
            }
        }
        return index;
    }    
int main(){
    vector<vector<int>>arr = {{0, 1, 1, 1},{0, 0, 1, 1},{1, 1, 1, 1},{0, 0, 0, 0}};
    cout<<rowWithMax1s(arr);
    return 0;
}