class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX, max_profit=0, todays_profit=0;
        
        for(int i=0;i<prices.size();i++)
        {
            min_price=min(prices[i], min_price);
            todays_profit=prices[i]-min_price;
            
            if(todays_profit>max_profit)
            {
                max_profit=todays_profit;
            }
        }
        return max_profit;
        
    }
};