class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=0;
        int mr=0;
        int profit,mp=0;
        while(r<prices.size()){
            profit = prices[r]-prices[l];
            if(profit<0){
                l=r;
            }
            if(profit>mp){
                mp  =profit;
            }
            r++;
        }
        return mp;
    }
};
