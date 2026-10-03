// class Solution {
// public:
//     void reverseString(vector<char>& s, int i) {
//         int n = s.size();
//         if(i >= n/2) {
//             return;
//         }
//         swap(s[i], s[n-1-i]);
//         reverseString(s, i+1);
//     }

//     void reverseString(vector<char>& s) {
//         reverseString(s, 0);
//     }
// };

class Solution{
public: 
    void reverseString(vector<char>& s){
        int n = s.size();
        int i =0;
        int j =n-1;
        for(int i =0; i<n/2; i++){
            swap(s[i], s[j]);
            j--;
        }
    }
};