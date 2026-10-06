class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[s[i]]++;
        }
        string final = "";
        while (!mpp.empty()) {
            char maxChar;
            int maxFreq = 0;

            for (auto x : mpp) {
                if (x.second > maxFreq) {
                    maxFreq = x.second;
                    maxChar = x.first;
                }
            }

            for (int i = 0; i < maxFreq; i++) {
                final += maxChar;
            }

            mpp.erase(maxChar);
        }
        return final;
    }
};