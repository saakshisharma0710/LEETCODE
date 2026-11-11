class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int i = 0;
        int j = 1;
        int k = 0;
        while(k < n) {
            if(nums[k] > 0) {
                ans[i] = nums[k];
                i = i + 2;
            }
            else if(nums[k] < 0) {
                ans[j] = nums[k];
                j = j + 2;
            }
            k++;
        }
        return ans;
    }
};