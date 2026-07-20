class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1 ; i< nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[j]= nums[i];
                j++;
            }
        }
        return j;
    }
};

/*Problem #15: Remove Duplicates from Sorted Array

Brute Force: O(NlogN + N)
- use set data structure
- insert all elements into set
- set automatically removes duplicates
- copy elements from set back into array
- return size of set

Optimal: O(N)
- initialize j = 1
- run for loop from i = 1 to n-1
- if nums[i] != nums[i-1]
    nums[j] = nums[i]
    j++
- return j

Memory Trigger:
When current element differs from previous,
store it at j and move j forward.*/