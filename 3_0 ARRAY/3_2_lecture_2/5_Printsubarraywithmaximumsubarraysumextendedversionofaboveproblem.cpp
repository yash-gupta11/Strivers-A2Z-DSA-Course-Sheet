#include<bits/stdc++.h>
using namespace std;
long long pairWithMaxSum(long long arr[], long long N) {
        // Your code goes here
        long long maxsum = INT_MIN;
        for(long long i = 1;i < N;i++){
            maxsum = max(maxsum,(arr[i] + arr[i-1]));
        }
        return maxsum;
    }   
int main(){
    long long arr[] = {4, 3, 1, 5, 6};
    cout<<pairWithMaxSum(arr,5);
    return 0;
}