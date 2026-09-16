//M1:Bruteforce.
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