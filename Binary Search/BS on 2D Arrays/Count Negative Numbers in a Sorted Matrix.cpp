//M1:Bruteforce. O(n^2)
class Solution {
    public:
        int countNegatives(vector<vector<int>>& grid) {
            int count = 0;
            for(int r=0;r<grid.size();r++){
                for(int c=0;c<grid[r].size();c++){
                    if(grid[r][c]<0)count++;
                }
            }
            return count;
        }
    };

//M2: Optimal. O(m+n)
class Solution {
    public:
        int countNegatives(vector<vector<int>>& grid) {
            int m = grid.size(),n = grid[0].size();
            int i = m-1; // row
            int j = 0;   // col
            int count = 0;
            while(i>=0 && j<n){
                if(grid[i][j] < 0){
                    count += n-j;
                    i--;
                }
                else j++;
            }
            return count;
        }
    };