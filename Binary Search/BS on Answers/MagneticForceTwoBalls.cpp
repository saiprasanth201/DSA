class Solution {
public:
    bool placeMagnets(vector<int>& position,int m,int dist){
        int n = position.size();
        int magnetsplaced = 1;
        int lastpos = position[0];
        for(int i = 1;i<n;i++){
            if(position[i]-lastpos>=dist){
                magnetsplaced++;
                lastpos = position[i];
            }
        }
        return magnetsplaced >= m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int low = 1;
        int high = position[n-1]-position[0];
        while(low<=high){
            int mid = low + (high-low)/2;
            if(placeMagnets(position,m,mid)){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return high;
    }
};