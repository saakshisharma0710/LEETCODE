class Solution {
public:
    bool isSet(int i, int j) {
        if((i & (1<<j))!=0){
            return true;
        }
        return false;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        int n = nums.size();
        for(int i=0;i<(1<<n); i++){
            vector<int> ans;
            for(int j =0; j<n; j++){
                if(isSet(i, j)){
                    ans.push_back(nums[j]);
                }
            }
            answer.push_back(ans);
        }
        return answer;
    }
};