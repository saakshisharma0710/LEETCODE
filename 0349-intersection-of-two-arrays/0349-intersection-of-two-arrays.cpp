class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> arr;
        while (i < n && j < m) {
            if (nums1[i] == nums2[j]) {
                if (arr.empty() || arr.back() != nums1[i])
                    arr.push_back(nums1[i]);
                i++;
                j++;
            } 
            else if(nums1[i] > nums2[j]) {
                j++;
            }
            else{
                i++;
            }
        }
        return arr;
    }
};