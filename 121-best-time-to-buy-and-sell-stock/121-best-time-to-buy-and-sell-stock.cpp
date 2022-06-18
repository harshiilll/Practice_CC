class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mini=INT_MAX;
        vector<int> brek;
        vector<int> brek2;        
        for(auto it:prices)
        {
            mini=min(mini,it);
            profit=max(profit,it-mini);
        }
        
         
        return profit;
        
    }
};