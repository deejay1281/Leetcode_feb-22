class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //declaring the variables 
        int n=prices.size(),max_profit=0,curr_profit=0,minp=INT_MAX;
        for(int i=0;i<n;i++){
            //updating the minimum price in minp
            minp=min(minp,prices[i]);
            //calculating the maximum profit at each index values
            curr_profit=max(curr_profit,prices[i]-minp);
            //updating maximum value of profit
            max_profit=max(max_profit,curr_profit);
        }
        return max_profit;
    }
};