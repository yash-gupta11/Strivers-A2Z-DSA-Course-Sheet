#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, int B) {
    
    int _xor = 0;
    unordered_map<int,int> mp;
    mp[0] = 1;
    int count = 0;
    for(int i = 0;i < A.size();i++){
        _xor ^= A[i];
        count += mp[_xor^B];
        mp[_xor]++;
    }
    return count;
    
}    
int main(){
    vector<int> A = {4, 2, 2, 6, 4};
    int B = 6;
    cout<<solve(A,B);
    return 0;
}