class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int days = prices.size();
        int min_price = prices[0];
        int max_profit = 0;
        for (int i = 0; i < days; i++)
            {
                if (prices[i] > min_price)
                {
                    int temp_profit = prices[i] - min_price;
                    if (temp_profit > max_profit)
                        {
                            max_profit = temp_profit;
                        }
                }
                else if (prices[i] < min_price)
                {
                    min_price = prices[i];
                }
            }
        return max_profit;
    }
};
