class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int min = INT_MAX;
        int profit = 0;
        for(int i = 0;i<prices.size();i++)
        {
            if(prices[i] < min)
            {
                min = prices[i];
            }
            else if(prices[i] > min)
            {
                int temp_prof = prices[i] - min;
                if(temp_prof > profit)
                {
                    profit = temp_prof;
                }
            }
        }
        return profit;
    }
};
