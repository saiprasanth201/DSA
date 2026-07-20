class Solution {
public:
    bool placeCows(vector<int>&stalls, int cows,int dist){
        int n = stalls.size();
        int cowsplaced = 1;
        int lastpos = stalls[0];
        for(int i = 1;i<n;i++){
            if(stalls[i]-lastpos >= dist){
                 cowsplaced++;
                 lastpos = stalls[i];
            }
        }
        return cowsplaced >= cows;
    }
    int aggressiveCows(vector<int> &stalls, int cows) {
        int n= stalls.size();
        sort(stalls.begin(),stalls.end());
        int low = 1;
        int high = stalls[n-1]-stalls[0];
        while(low<=high){
            int mid = low+(high-low)/2;
            if(placeCows(stalls,cows,mid)){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return high;
    }
};