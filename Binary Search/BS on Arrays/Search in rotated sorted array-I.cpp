class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};

//tab2
class Solution {
public:
    int search(vector<int> &nums, int target) {
       int n = nums.size();
       int low = 0, high = n-1;
       while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target)return mid;
        if(nums[low]<=nums[mid]){
            if(nums[low]<= target && target <= nums[mid]) high = mid-1;
            else{low = mid+1;}
        }else{
            if(nums[mid]<=target && target <= nums[high]) low = high+1;
            else{high = mid-1;}
        }
       }
       return -1;
    }
};

/*Problem #104: Search in Rotated Sorted Array

Brute: O(N)

traverse the entire array
if nums[i] == target
return i
if target not found
return -1

TC = O(N)

SC = O(1)

Optimal: O(log N)
initialize
low = 0
high = n-1
while(low <= high)
find mid
if nums[mid] == target
return mid
Step 1 : Find the Sorted Half
if
nums[low] <= nums[mid]
Left Half is sorted

Otherwise

Right Half is sorted
Step 2 : If Left Half is Sorted

Check if target lies inside it

nums[low] <= target <= nums[mid]

Yes

↓

Search Left

high = mid - 1;

No

↓

Search Right

low = mid + 1;
Step 3 : If Right Half is Sorted

Check if target lies inside it

nums[mid] <= target <= nums[high]

Yes

↓

Search Right

low = mid + 1;

No

↓

Search Left

high = mid - 1;
if loop ends
return -1

TC = O(log N)

SC = O(1)

Memory Trigger
Find Sorted Half

↓

Left Sorted?

↓

Target Inside?

↓

Yes → Left

No  → Right

---------------------

Right Sorted?

↓

Target Inside?

↓

Yes → Right

No  → Left*/
