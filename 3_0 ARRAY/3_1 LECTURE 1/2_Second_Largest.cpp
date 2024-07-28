#include<iostream>
#include<vector>
using namespace std;
int secondlargest(vector<int> &arr){
    int largest = arr[0],second_largest = -1;
    for(int i = 1;i < arr.size();i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest)
            second_largest = arr[i];
        }
    return second_largest;   
} 
int main(){
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout<<"Second Largest of array : "<<secondlargest(arr);
    return 0;
}