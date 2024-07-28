#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int> &arr){
    int x = arr[arr.size()-1];
    for(int i = arr.size() - 1;i > 0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}   
int main(){
    vector<int> arr = {3,2,5,3,6,4,7};
    for(auto i : arr)
        cout<<i<<" ";
    rotate(arr);
    cout<<endl<<"After rotation"<<endl;
    for(auto i : arr)
        cout<<i<<" ";
    return 0;
}