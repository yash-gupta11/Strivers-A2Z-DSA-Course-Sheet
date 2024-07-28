#include<bits/stdc++.h>
using namespace std;
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int s = 0,e = n-1;
	while(s <= e){
		int mid = (e-s)/2+s;
		if(a[mid] == x)
			return {a[mid],a[mid]};
		else if(a[mid] > x)
			e = mid-1;
		else
			s = mid+1;
	}
	pair<int,int> ans;
	ans.first = e < 0 ? -1 : a[e];
	ans.second = s >= n ? -1 : a[s];
	return ans;
}   
int main(){
    int n=6, x=5;
    vector<int> a={3, 4, 7, 8, 8, 10}; 
    pair<int,int> p = getFloorAndCeil(a,n,x);
    cout<<p.first<<" "<<p.second;
    return 0;
}