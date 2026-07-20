class Solution {
public:
    bool possible(vector<int>&nums,int m,int assigned){
        int pages = 0;
        int students = 1;
        for(auto num:nums){
            if(pages+num<=assigned) pages+=num;
            else{
                students++;
                pages = num;
            }
        }
        return students<=m;
    }
    int findPages(vector<int> &nums, int m){
        if(m>nums.size()) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = low +(high-low)/2;
            if(possible(nums,m,mid))high = mid-1;
            else{low = mid+1;}
        }
        return low;
    }
};