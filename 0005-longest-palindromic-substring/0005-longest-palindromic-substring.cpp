class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, maxLength = 1;

        for (int i = 0; i < n; i++) {
            int left = i, right = n - 1;

            while (left <= right) {
                if (s[left] == s[right]) {
                    int l = left, r = right;

                    while (l < r && s[l] == s[r]) {
                        l++;
                        r--;
                    }

                    if (l >= r) {
                        int len = right - left + 1;

                        if (len > maxLength) {
                            start = left;
                            maxLength = len;
                        }
                        break;
                    }
                }

                right--;
            }
        }

        return s.substr(start, maxLength);
    }
};
