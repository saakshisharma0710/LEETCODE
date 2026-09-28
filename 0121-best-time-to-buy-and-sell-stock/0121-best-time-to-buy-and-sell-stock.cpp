class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i =0;
        int j = 1;
        int maxProfit=0;
        while(j<n){
            if(prices[i] > prices[j]){
                i = j;
            }
            else{
                int currentProfit = prices[j] - prices[i];
                maxProfit = max(currentProfit , maxProfit);
            }
            j++;
        }
        
    return maxProfit;
    }
};