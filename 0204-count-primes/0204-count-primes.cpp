class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;
        for (int i = 4; i < n; i += 2) {
            prime[i] = false;
        }
        for (int i = 3; i * i < n; i += 2) {
            if (prime[i]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    prime[j] = false;
                }
            }
        }

        int count = 1;
        for (int i = 3; i < n; i += 2) {
            if (prime[i]==1)
                count++;
        }

        return count;
    }
};

// class Solution {
// public:
//     int countPrimes(int n) {
//         int count = 0;
//         for(int i = 2; i < n; i++) {
//             bool prime = true;
//             for(int j = 2; j * j <= i; j++) {
//                 if(i % j == 0) {
//                     prime = false;
//                     break;
//                 }
//             }
//             if(prime) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };