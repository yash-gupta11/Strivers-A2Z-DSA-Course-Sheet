#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>& arr) {
        int n = arr.size();
        int x = 0;
        for(int i = 1;i < n;i++){
            if(arr[i-1] > arr[i])
                x++;
        }
        if(arr[0] < arr[n-1])
            x++;
        return x <= 1;
    }   
int main(){
    vector<int> arr = {3,4,5,1,2};
    cout<<check(arr);
    return 0;
}