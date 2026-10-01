class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        map<char, char> k = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        stack<char> st;
        for (int i = 0; i < n; i++) {
            //Opening bracket
            if (k.find(s[i]) != k.end()) {
                st.push(s[i]);
            }
            // Closing bracket
            else {
                if (st.empty()) {
                    return false;
                }
                else if (k[st.top()] == s[i]) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};