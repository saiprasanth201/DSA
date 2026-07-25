class solution{
public:
    void countsub(vector<int>&nums,int n,int k,int idx,int & count,int &sum){
        if(idx == nums.size()){
            if(sum == k){
                count++;
            }
            return;
        }
        countsub(nums,n,k,idx+1,count,sum+nums[idx]);
        countsub(nums,n,k,idx+1,count,sum);
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
        int sum =0,count = 0;
        countsub(nums,n,k,0,count,sum);
        if (k == 0 && count > 0)count--;
        return count;
}