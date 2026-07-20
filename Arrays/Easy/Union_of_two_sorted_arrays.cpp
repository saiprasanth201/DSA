class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        vector<int>ans;
        for(int i =0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }
        for(int j =0;j<nums2.size();j++){
            st.insert(nums2[j]);
        }

        for(auto x : st){
             ans.push_back(x);
        }
         return ans;
    }
};