
class Solution {
public:
    vector<vector<vector<int>>> dp;
    int n;
    int f(int index, int k, int cap, vector<int>& prices) {
        if (cap == 0) return 0;
        if (index >= n) return 0;
        if (dp[index][k][cap] != -1) return dp[index][k][cap];

        int buy, not_buy, sell, not_sell;

        if (k == 0) {
            buy = -prices[index] + f(index + 1, 1, cap, prices);
            not_buy = f(index + 1, 0, cap, prices);

            return dp[index][k][cap] = max(buy, not_buy);
        }
        else {
            sell = prices[index] + f(index + 1, 0, cap - 1, prices);
            not_sell = f(index + 1, 1, cap, prices);

            return dp[index][k][cap] = max(sell, not_sell);
        }
    }

    int maxProfit(vector<int>& prices) {
        n = prices.size();
        dp.assign(n, vector<vector<int>>(2, vector<int>(3, -1)));

        return f(0, 0, 2, prices);
    }
};
