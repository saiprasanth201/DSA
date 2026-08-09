class Solution{    
    public:
    int findContentChildren(vector<int>& greed, vector<int>& size){
        sort(greed.begin(),greed.end());
        sort(size.begin(),size.end());
        int l =0, r =0;
        int n = greed.size();
        int m = size.size();

        while(l<n && r<m){
            if(size[r] >= greed[l]){
                l++;
            }
            r++;
        }
        return l;
    }
};