class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        int i =0;
        for(int i =0; i<n ; i++){
            st.insert(nums[i]);
        }
        if(st.size() >= 3) {
            auto it = st.rbegin();
            it++;
            it++;
            return *it;
        }
        else {
            return *st.rbegin();
        }
    }
};






// optimize it 