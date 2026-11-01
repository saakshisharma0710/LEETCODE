// simple method 2d matrix m search krne k liye 
/*class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int r = 0, c = m - 1;
        while(r < n && c >= 0) {
            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] > target) c--;
            else r++;
        }
        return false;
    }
};
*/
// just because question mai binarys earch bola tha laganae ko toh 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int low = 0, high = n * m - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;

            int r = mid / m;
            int c = mid % m;

            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] > target) high = mid - 1;
            else low = mid + 1;
        }

        return false;
        
    }
};