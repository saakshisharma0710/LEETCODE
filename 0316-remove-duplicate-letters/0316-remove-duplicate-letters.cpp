class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        int last[26] = {0};
        bool visited[26] = {false};

        // last position input string ka 
        for(int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }
        for(int i = 0; i < s.size(); i++) {
            // skipping if already stack mai hai
            if(visited[s[i] - 'a']) {
                continue;
            }
            // jiska value bada usko remove
            while(!st.empty() && st.top() > s[i] &&
                  last[st.top() - 'a'] > i) {
                visited[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            visited[s[i] - 'a'] = true;
        }
        // ans 
        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};