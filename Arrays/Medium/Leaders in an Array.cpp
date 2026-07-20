class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int>ans;  
      int maxi = INT_MIN;
      int n = nums.size();

      for(int i=n-1;i>=0;i--){
        if(nums[i]> maxi){
            ans.push_back(nums[i]);
        }
        maxi = max(maxi,nums[i]);
      }
     reverse(ans.begin(),ans.end());
      return ans;
    }
};

//tab2
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int>ans;
      int n = nums.size();
      int maxi = INT_MIN;

      for(int i = n-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi = max(maxi,nums[i]);
      }
    reverse(ans.begin(),ans.end());
       return ans;
    }
};

/*Problem #36: Leaders in an Array

Optimal: O(N)

- take maxi = INT_MIN
- traverse array from right to left
- if nums[i] > maxi
    push into answer
- update maxi
- reverse answer array
- return answer


Memory Trigger:
Traverse from right.
Keep track of maximum seen so far.*/