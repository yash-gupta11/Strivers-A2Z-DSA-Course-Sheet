#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& arr) {
        int index = 0;
        int n = arr.size();

        for(int i = 1;i < n;i++){
            if(arr[i] != arr[i-1]){
                arr[index] = arr[i-1];
                index++;
            }
        } 
        arr[index] = arr[n-1];
        return index+1;
    }
int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    int n = removeDuplicates(arr);
    cout<<"Size of new array : "<<n<<endl;
    for(int i = 0;i < n;i++)
        cout<<arr[i]<<' ';
    return 0;
}