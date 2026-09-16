class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n = nums.size();
            int low = 0,high = n-1;
            while(low<high){
                int mid = low+(high-low)/2;
                if(nums[mid]<nums[high]) high = mid;
                else if(nums[mid]>nums[high]) low = mid+1;
                else high--;
            }
            return nums[low];
        }
    };

    Problem #218 : Find Minimum in Rotated Sorted Array II

Optimal: O(log n) Average Time | O(1) Space
Worst Case: O(n) Time

━━━━━━━━━━━━━━━━━━

Pattern:
• Binary Search
• Rotated Sorted Array
• Duplicates

State:
low = 0
high = n - 1
mid = low + (high - low) / 2

Choices / Observation:
• nums[mid] < nums[high]
  → minimum is at mid or to the left
  → high = mid

• nums[mid] > nums[high]
  → minimum must be to the right of mid
  → low = mid + 1

• nums[mid] == nums[high]
  → cannot determine which side contains minimum
  → high--

Base Case:
low == high
→ nums[low] is the minimum

Key Idea:
Compare nums[mid] with nums[high].
Duplicates create ambiguity when they are equal,
so safely shrink the search space by doing high--.

Algorithm:
1. Set low = 0, high = n-1
2. Calculate mid
3. Compare nums[mid] with nums[high]
4. Shrink the appropriate half
5. When low == high, return nums[low]

Why:
Without duplicates, binary search can always determine
which sorted portion contains the minimum.
With duplicates, nums[mid] == nums[high] gives no directional
information, so removing one duplicate from high is safe.

Complexity:
Average Time: O(log n)
Worst Time: O(n) → when many/all elements are duplicates
Space: O(1)

Memory Trigger:
mid < high → HIGH = MID
mid > high → LOW = MID + 1
mid == high → HIGH--
    ↓
LOW == HIGH → Answer