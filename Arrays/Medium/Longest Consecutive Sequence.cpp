class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(); if(n == 0)return 0;
        int count = 1; 
        int maxi = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1;i<n;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            else if(nums[i]==nums[i-1]+1){
                count++;
            }
            else{
                count = 1;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};

/*Problem #37: Longest Consecutive Sequence

Better: O(NlogN)

- sort array
- count = 1
- maxi = 1

- if duplicate
    continue

- if consecutive
    count++

- else
    count = 1

- update maxi

- return maxi

TC = O(NlogN)
SC = O(1)

Memory Trigger:
Sort array and count streak.
Ignore duplicates.*/