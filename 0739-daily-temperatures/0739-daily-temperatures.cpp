class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int > answer(n, 0);
        stack<pair<int, int>>st;
        for(int i =n-1; i>=0; i--){
            while(!st.empty() && st.top().first <= temperatures[i]){
                    st.pop();
                }
            if(!st.empty()){
                int ele = st.top().second;
                answer[i] = ele - i;
            }
            st.push({temperatures[i], i});
        }
        return answer;
    }
};