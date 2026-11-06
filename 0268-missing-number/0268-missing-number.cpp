class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*int n = nums.size();
        int sum =0;
        for(int i=0; i<n; i++){
            sum = sum + nums[i];
        }
        int total = (n * (n+1))/2;
        return total- sum;
        */
        int n = nums.size();
        int xor1 =0, xor2=0;
        for(int i =0; i<n; i++){
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ i;
        }
        xor1 = xor1 ^ n;
        return xor1 ^ xor2;

    }
};