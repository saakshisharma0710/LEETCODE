class Solution {
public:
    bool judgeSquareSum(int c) {
        int n = sqrt(c);
        vector<int> arr;
        for (int i = 0; i <= n; i++) {
            arr.push_back(i);
        }
        int sz = arr.size();
        int a = 0;
        int b = sz - 1;
        while (a <= b) {
            long long sum = 1LL * arr[a] * arr[a] + 1LL * arr[b] * arr[b];
            if (sum == c) {
                return true;
            } else if (sum < c) {
                a++;
            } else {
                b--;
            }
        }
        return false;
    }
};