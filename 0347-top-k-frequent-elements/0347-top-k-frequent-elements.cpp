class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        vector<int> arr;
        for (int j = 0; j < k; j++) {
            int maxi = 0;
            int num = 0;

            for (auto it : mpp) {
                if (it.second > maxi) {
                    maxi = it.second;
                    num = it.first;
                }
            }
            arr.push_back(num);
            mpp.erase(num);
        }
        return arr;
    }
};