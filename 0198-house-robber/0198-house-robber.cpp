
class Solution {
public:
    vector<int> dp;
    int f(int index, vector<int>& nums) {
        if (index < 0) {
            return 0;
        }
        if (dp[index] != -1) {
            return dp[index];
        }
        int not_take = f(index - 1, nums);
        int take = f(index - 2, nums) + nums[index];
        return dp[index] = max(not_take, take);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        int index = n - 1;
        dp = vector<int>(n, -1);
        return f(index, nums);
    }
};
