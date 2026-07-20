//Tab1 Brute Force
class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            for(int i=0; i<nums.size()-1;i++){
                if(nums[i]>nums[i+1])
                return false;
            }
        return true;
	}   
};

//LC 1752
class Solution {
public:
    bool check(vector<int>& nums) {
        int breaks = 0;
        int n=nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1)%n]) {
                breaks++;
            }
        }
        return breaks <= 1;
    }
};

//Notes
/*Brute force: O(N²)
- check if picked ele is small/equal to next ele
- move ptr to next idx and return true
- if any ele picked is greater than its future ele return false
- for(int i =0;i<n;i++){
      for(int j = i+1;j<n;j++){
          if(nums[j]<nums[i]) return false;
      }
  }
  return true;

Optimal: O(N)
- run a for loop starting from i = 1
- check if nums[i] < nums[i-1] return false
- else continue
- after loop return true

Memory Trigger:
Current element should never be smaller than previous element.*/