#include<bits/stdc++.h>
using namespace std;
int occurence(int arr[],int n,int x,bool last){
	    int occ = -1;
	    int s = 0,e = n-1;
	    while(s <= e){
            int mid = s + (e-s)/2;
            if(arr[mid] == x){
                occ = mid;
                if(last)
                    s = mid+1;
                else
                    e = mid-1;
            }
            else if(arr[mid] < x)
                s = mid+1;
            else
                e = mid-1;
        } 
        return occ;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int first = occurence(arr,n,x,false);
	    if(first == -1)
	        return 0;
	    int last = occurence(arr,n,x,true);
	    return last-first+1;
	}    
int main(){
    int N = 7, X = 2;
    int Arr[] = {1, 1, 2, 2, 2, 2, 3};
    cout<<count(Arr,N,X);
    return 0;
}