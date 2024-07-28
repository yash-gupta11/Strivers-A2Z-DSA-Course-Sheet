#include<bits/stdc++.h>
using namespace std;
int lenOfLongSubarr(int A[],  int n, int K) 
    { 
        // Complete the function
        int maxlen = 0;
        map<long long,int> mp;
        long long sum = 0;
        for(int i = 0;i < n;i++){
            sum += A[i];
            if(mp.find(sum) == mp.end())
                mp[sum] = i;
            if(sum == K)
                maxlen = max(maxlen,i+1);
            long long rem = sum - K;
            
            if(mp.find(rem) != mp.end()){
                maxlen = max(maxlen,i-mp[rem]);
            }
            
        }
        return maxlen;    
    }
int main(){
    int arr[] = {10, 5, 2, 7, 1, 9}, k = 15;
    cout<<lenOfLongSubarr(arr,6,k);
    return 0;
}