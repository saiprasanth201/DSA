class Solution {
public:
    bool canPaint(vector<int>&boards,int m,int Maxtime){
        int painter = 1;
        int time = 0;
        for(auto board:boards){
            if(time+board<=Maxtime){
                time += board;
            }
            else{
                painter++;
                time = board;
            }
        }
        return painter <= m;
    }
    int largestSubarraySumMinimized(vector<int>& boards, int m) {
        int low = *max_element(boards.begin(),boards.end());
        int high = accumulate(boards.begin(),boards.end(),0);
        while(low<=high){
        int mid = low+(high-low)/2;
        if(canPaint(boards,m,mid)){
            high = mid-1;
        }else{
            low = mid+1;
        }
    } 
    return low;
    }
};