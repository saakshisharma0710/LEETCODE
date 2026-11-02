
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);

        int i = 0, j = n - 1;
        int k = n - 1;

        while (i <= j) {
            if (nums[i] * nums[i] > nums[j] * nums[j]) {
                arr[k] = nums[i] * nums[i];
                i++;
            }
            else {
                arr[k] = nums[j] * nums[j];
                j--;
            }
            k--;
        }

        return arr;
    }
};
