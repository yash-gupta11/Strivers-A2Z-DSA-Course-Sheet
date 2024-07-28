#include<bits/stdc++.h>
using namespace std;
bool search(vector<int>& nums, int target) {

        int n = nums.size();

        if(nums[n-1] == target)
            return true;
        if(nums[0] == target)
            return true;

        int s = 0,e = n-1;
        while(s < e){
            if(nums[s] == nums[e]){
                if(nums[s] == target)
                    return true;
                s++;
                e--;
            }else
                break;        
        }
        int s1 = s,e1 = e;
        while(s <= e){
            int mid = (s+e)/2;
            if(nums[mid] == target)
                return mid;
            
            if(nums[mid] >= nums[s1]){
                if(target >= nums[s1]){
                    if(nums[mid] > target)
                        e = mid-1;
                    else
                        s = mid+1;
                    
                }else{
                    s = mid+1;
                }
            }else{
                if(target <= nums[e1]){
                    if(nums[mid] > target)
                        e = mid-1;
                    else
                        s = mid+1;
                }else{
                    e = mid-1;
                }
            }
        }
        return 0;
    }    
int main(){
    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;
    cout<<search(nums,target);
    return 0;
}