// class Solution {
// public:
//     bool checkPerfectNumber(int num) {
//         int sum=0 ;
//         for(int i =1; i<num; i++){
//             if(num%i==0){
//                 sum = sum +i;
//             }
//         }
//         if(sum == num){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };


//optimize : 
class Solution{
public:
    bool checkPerfectNumber(int num){
        if(num<=1){
            return false;
        }
        int sum=1;
        for(int i=2; i<sqrt(num); i++){
            if(num%i == 0){
                sum = sum + i;
                if(num/i != i){
                    sum = sum + (num/i);
                }
            }
        }
        if(sum == num) return true;
        else return false;
    }

};