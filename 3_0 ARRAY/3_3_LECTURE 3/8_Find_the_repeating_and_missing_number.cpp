#include<bits/stdc++.h>
using namespace std;
vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int a,b;
        int modu = n+1;
        for(int i = 0;i < n;i++){
            arr[(arr[i]%modu)-1] += modu;   
        }
        for(int i = 0;i < n;i++){
            if(arr[i] < modu)
                a = i+1;
            if(arr[i]/modu == 2)
                b = i + 1;
        }
        return {b,a};
    }    
int main(){
    int n = 2;
    vector<int> arr = {2, 2};
    vector<int> ans = findTwoElement(arr,n);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}