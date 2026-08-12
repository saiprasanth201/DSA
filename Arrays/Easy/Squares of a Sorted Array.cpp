class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        int left = 0, right = n-1;

        for(int i = n-1;i>=0;i--){
            if(abs(nums[left]) > abs(nums[right])) {
            res[i] = nums[left]*nums[left];
            left++;
        }else{
            res[i] = nums[right]*nums[right]; right--;
            }
        }
        return res;
    }
};

//Day 74
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto &it:nums) it *= it;
        sort(nums.begin(),nums.end());
        return nums;
    }
};