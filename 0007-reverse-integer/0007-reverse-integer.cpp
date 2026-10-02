class Solution {
public:
    int reverse(int x) {
        int a = -pow(2, 31);
        int b = pow(2, 31) -1;
        int rev=0;
        while(x!=0){
            long long l = x%10;
            x = x/10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }
            rev = (rev*10) +l;
        }
        return rev;
    }
};