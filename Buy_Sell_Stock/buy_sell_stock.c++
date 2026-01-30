class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];   // miglior prezzo di acquisto visto finora
        int max_profit = 0;          // miglior profitto visto finora

        for (int i = 1; i < prices.size(); ++i) {
            // se vendo oggi, questo è il profitto
            int profit_today = prices[i] - min_price;
            if (profit_today > max_profit)
                max_profit = profit_today;

            // aggiorno il miglior giorno per comprare
            if (prices[i] < min_price)
                min_price = prices[i];
        }

        return max_profit;
    }
};
