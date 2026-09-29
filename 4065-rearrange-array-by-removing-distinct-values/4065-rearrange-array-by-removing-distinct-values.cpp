class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        map<int, int>mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]] = mp[nums[i]] + 1;
        }
        vector<int> ans;
         while (!mp.empty()) {
            for (auto it = mp.begin(); it != mp.end(); ) {
                ans.push_back(it->first);
                it->second--;
                if (it->second == 0)
                    it = mp.erase(it);
                else
                    it++;
            }
        }
        return ans;
    }
};