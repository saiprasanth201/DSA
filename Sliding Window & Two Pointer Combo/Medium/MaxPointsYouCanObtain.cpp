class Solution {
    public:
        int maxScore(vector<int>& cardPoints, int k) {
            int res = 0;
            int right = cardPoints.size()-1;
            for(int i=0;i<k;i++) res+= cardPoints[i];
            int curr = res;
            for(int left = k-1;left>=0;left--){
                curr -= cardPoints[left];
                curr += cardPoints[right--];
                res = max(res,curr);
        }
        return res;
    }
};