class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mpp;
        int n = arr.size();
        int lucky=-1;
        for(int i =0; i<n; i++){
            mpp[arr[i]]++;
        }
        for(auto it : mpp) {
            if(it.first == it.second) {
                lucky = it.first;
            }
        }

        return lucky;
        
    }
};