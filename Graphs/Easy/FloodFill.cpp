class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color,int orgColor){
        if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j] != orgColor||image[i][j]== color) return;

        image[i][j] = color;

        dfs(image,i+1,j,color,orgColor);
        dfs(image,i-1,j,color,orgColor);
        dfs(image,i,j-1,color,orgColor);
        dfs(image,i,j+1,color,orgColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;
    }
};