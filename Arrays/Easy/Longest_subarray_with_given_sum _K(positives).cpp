//Tab1
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int maxlen = 0;
        for(int i = 0; i < n ; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum = sum+ nums[j];
                if(sum == k){
                maxlen = max(maxlen,j-i+1); 
                // gap between indices is j - i so j-i+1 gives exact length,
                }
            }   
        }
       return maxlen; 
    }  
};

// Tab 2
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int left = 0,right = 0, maxlen = 0;
        int sum = nums[0];

        while(right < n){
            while(left <= right && sum > k){
                sum = sum - nums[left];
                left++;
            }
            if(sum == k){
                maxlen = max(maxlen,right-left+1);
            }
            right++;
            if(right < n){
                sum = sum + nums[right];
            }
        }
        return maxlen;
    }
};

/*Pick start index i
Expand end index j
Keep adding nums[j]
If sum == k
    calculate length
    update maxlen*/