class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        int sum = 0;
        
        for(int i = 0; i<n;i++){
                sum += nums[j];
                maxi = max(maxi,sum);
                if(sum<0){
                    sum = 0;
                }
            }
        return maxi;
    }
};

// int sum = 0
// int maxi = INT_MIN
// for loop throughout array 
// set sum += nums[i]
// and update maxi = max(maxi,sum)
// sum becomes negative
// set sum = 0 and throw -ve away
// return maxi;