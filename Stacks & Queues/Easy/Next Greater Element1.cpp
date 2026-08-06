//Brute Force:

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(auto x : nums1){
            int next = -1;
            bool found = false;

            for(auto y : nums2){
                if(y == x) found = true;
                if(found && y > x){
                    next = y;
                    break;
                } 
            }
            ans.push_back(next);
        }
        return ans;
    }
}; 