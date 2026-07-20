//tab1
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k% n;
        vector<int>temp;

        for(int i = 0; i < k; i++)
{
    temp.push_back(nums[i]);
}

        for(int i = k;i<nums.size();i++){
            nums[i-k] = nums[i]; 
            // as we are shifting k places we need to shift i to i-kth place.
        }
        int j = 0;
        for(int i = n-k; i < nums.size();i++){ 
            // n-k is the position starting for repalcement of temp values for rotation in last
            nums[i] = temp[j];
            j++;
        }
        return;
    }
};

//tab2
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
         int n = nums.size();
         vector<int>ans(n);
         k = k%n;
         for(int i =0;i<n;i++){
            ans[(i-k+n)%n] = nums[i];
        }
         nums = ans;
    }
};