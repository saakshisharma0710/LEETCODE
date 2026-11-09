class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        /*
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = -((nums[0] * nums[1] )- (nums[n-1] * nums[n-2]));
        return ans;
        */
        int n = nums.size();

        int largest = nums[0];
        int slargest = INT_MIN;

        int small = nums[0];
        int ssmall = INT_MAX;

        for (int i = 1; i < n; i++) {
            if (nums[i] > largest) {
                slargest = largest;
                largest = nums[i];
            }
            else if (nums[i] > slargest) {
                slargest = nums[i];
            }

            if (nums[i] < small) {
                ssmall = small;
                small = nums[i];
            }
            else if (nums[i] < ssmall) {
                ssmall = nums[i];
            }
        }

        return (largest * slargest) - (small * ssmall);
    }
};