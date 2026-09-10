class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0 , high = n-1;
        while(low < m && high >= 0){
            int midval = matrix[low][high];
            if(midval == target) return true;
            if(midval < target) low++;
            else high--;
        }
        return false;
    }
};