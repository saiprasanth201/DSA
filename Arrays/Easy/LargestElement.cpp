class Solution {
public:
    int largestElement(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      return nums[nums.size()-1];
    }
};

//Notes
/*brute force: O(nlogn)
-sort nums 
-return the last element

better: O(N)
-intitalize the largest to nums[0].
- iterate the array using for loop.
- if nums[i] > largest, update largest as nums[i] and return largest

Memory Trigger:
Keep track of the biggest element seen so far.*/