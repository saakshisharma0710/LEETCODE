class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        /*
        int n = nums.size();
        int xor1 = 0;
        for(int i =0; i<n ; i++){
            xor1 = xor1 ^ nums[i];
        }
        return xor1;
        */
        // XOR will take O(n)


        int n= nums.size();
        int low=0;
        int high =n-1;
        while(low<high){
            
        int mid = low+ (high -low)/2;
            if(mid%2 == 1){
                mid--;
            }
            if(nums[mid] == nums[mid+1]){
                low = mid+2;
            }
            else{
                high = mid;
            }
            
        }
        return nums[low];
    }
};