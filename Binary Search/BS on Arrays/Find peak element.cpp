class Solution {
public:
    int findPeakElement(vector<int> &nums) {
      int n = nums.size();
      int low = 0,high = n-1;
      while(low<high){
        int mid = low+(high-low)/2;
        if(nums[mid]>nums[mid+1])high = mid;
        else{low=mid+1;}
      }
      return low;
    }
};

/*Problem #109: Find Peak Element

Optimal: O(log N)
initialize
low = 0
high = n-1
while(low < high)
find mid
compare
nums[mid]

with

nums[mid+1]
if
nums[mid] > nums[mid+1]
you are on the decreasing slope
peak lies on the left (including mid)
high = mid
else
nums[mid] < nums[mid+1]
you are on the increasing slope
peak lies on the right
low = mid + 1
repeat until
low == high
return
low
// or high

TC = O(log N)

SC = O(1)

Memory Trigger
Compare

mid

with

mid+1

--------------------

mid > mid+1

↓

Decreasing Slope

↓

Peak on Left

↓

high = mid

--------------------

mid < mid+1

↓

Increasing Slope

↓

Peak on Right

↓

low = mid + 1

--------------------

low == high

↓

Peak Found

just check the adjacent next ele nums[mid] > nums[mid+1];*/