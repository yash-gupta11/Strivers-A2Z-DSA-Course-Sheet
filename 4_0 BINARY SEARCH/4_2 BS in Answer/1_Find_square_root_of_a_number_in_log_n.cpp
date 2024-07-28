#include<bits/stdc++.h>
using namespace std;
long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        int s = 1,e = x;
        while(s <= e){
            long long int mid = (e-s)/2 + s;
            long long int square = mid*mid;
            if(square == x)
                return mid;
            else if(square < x)
                s = mid+1;
            else
                e = mid-1;
        }
        return e;
    }   
int main(){
    long long int x  = 10000;
    cout<<floorsqrt(x);
    return 0;
}