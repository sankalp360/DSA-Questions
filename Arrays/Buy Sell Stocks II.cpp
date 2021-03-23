    int maxProfit(vector<int>& prices) {
        int buy_amt = INT_MAX;
        int profit = 0;
        for(int i=0; i<prices.size(); i++)
        {
            if(buy_amt < prices[i])
            {
                profit = profit + (prices[i] - buy_amt);
                buy_amt = prices[i];
            }
            else
            {
                buy_amt = min(buy_amt, prices[i]);
            }
        }
        
        return profit;
    }
