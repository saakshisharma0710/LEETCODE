class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(), prices.end());
        int i =0;
        int j =1;
        int profit=0;
        int total = prices[i] + prices[j];
        if(total > money){
            return money;
        }
        else{
            profit = money - total;
        }
        return profit;
    }
};