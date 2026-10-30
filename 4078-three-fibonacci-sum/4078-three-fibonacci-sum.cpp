class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<int> arr = {0, 1};
        while (true) {
            int next = arr[arr.size() - 1] + arr[arr.size() - 2];
            if (next > n) break;
            arr.push_back(next);
        }
       for (int i = 0; i + 2 < arr.size(); i++) {
            if (arr[i] + arr[i + 1] + arr[i + 2] == n) {
                return true;
            }
        }

        return false;
        
    }
};