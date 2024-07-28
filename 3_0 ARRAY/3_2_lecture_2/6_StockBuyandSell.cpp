#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int maxprofit = 0;
        for(int i = 1;i < prices.size();i++){
            if(buy < prices[i] )
                maxprofit = max(maxprofit,prices[i] - buy);
            else
                buy = prices[i];
        }
        return maxprofit;
    }   
int main(){
    vector<int> nums = {7,1,5,3,6,4};
    cout<<maxProfit(nums);
    return 0;
}