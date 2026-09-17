class Solution {
public:
    const int mod = 1e9 +7;
    vector<int> NSE(vector<int> & arr, int n){
        vector<int> ans(n,n);
        stack<int> st;
        for(int i =  n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if (!st.empty()) {
                ans[i] = st.top() - i;
            }
            else {
                ans[i] = n-i;  
            }
            st.push(i);
        }
        return ans;
    };
    
    vector<int> PSEE(vector<int> &arr, int n){
        vector<int> ans(n, -1);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ans[i] = i - st.top();
            }
            else {
                ans[i] = i+1;  
            }
            st.push(i);
        }
        return ans;
    };
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse = NSE(arr, n);
        vector<int> psee = PSEE(arr, n);
        long long ans =0;
        for(int i =0; i<n; i++){
            long long left = psee[i];
            long long right = nse[i];
            ans = (ans + arr[i] * left % mod * right) % mod;
        }
        return ans;
    }
};
