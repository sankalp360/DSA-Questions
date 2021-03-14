class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int min_amt = arr[0];
        int max_profit = 0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] < min_amt)
            {
                min_amt = arr[i];
            }
            if(arr[i] - min_amt > max_profit)
            {
                max_profit = arr[i] - min_amt;
            }
            
        }
        return max_profit;
    }
};
