class Solution {
public:
    bool isPalindrome(int x) {
        long long original =x;
        long long sum =0;
        while(x>0){
            long long l =x%10;
            x= x/10;
            sum = (sum*10) +l;
        }
        if(sum == original){
            return true;
        }
        else{
            return false;
        }

    }
};