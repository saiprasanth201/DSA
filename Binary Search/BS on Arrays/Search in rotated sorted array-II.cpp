class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int target)  {
      int n = nums.size();
      int low =0,high=n-1;
      while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target)return true;
        if(nums[mid]==nums[low] && nums[mid]==nums[high]){
            low++;high--;continue;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target <= nums[mid]) high = mid -1;
            else{low = mid+1;}
        }else{
            if(nums[mid]<=target && target <= nums[high]) low = mid + 1;
            else{high = mid-1;}
        }
      }
      return false;
    }
};

/*Problem #105: Search in Rotated Sorted Array II (Duplicates)
Brute: O(N)
traverse the entire array
if nums[i] == target
return true
after traversal
return false

TC = O(N)

SC = O(1)

Optimal: Average O(log N)
initialize
low = 0
high = n-1
while(low <= high)
find mid
if nums[mid] == target
return true
Duplicate Case

If

nums[low] == nums[mid] == nums[high]

we cannot determine which half is sorted.

So,

low++;
high--;

continue searching.

If Left Half is Sorted

Condition

nums[low] <= nums[mid]

Check if target lies inside

nums[low] <= target <= nums[mid]

Yes

↓

high = mid - 1;

No

↓

low = mid + 1;
Else Right Half is Sorted

Check

nums[mid] <= target <= nums[high]

Yes

↓

low = mid + 1;

No

↓

high = mid - 1;
if loop ends
return false
TC
Average : O(log N)

Worst Case : O(N)
SC
O(1)


Memory Trigger
Find Target

↓

Duplicates?

↓

low == mid == high

↓

Shrink

low++

high--

--------------------

Else

Find Sorted Half

↓

Target Inside?

↓

Search That Half*/