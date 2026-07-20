class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n = nums.size();
        int low = 0,high= n-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid]<nums[high])high = mid;
            else{low = mid+1;}
        }
        return low;
    }
};

/*Problem #107: Find How Many Times an Array is Rotated
Optimal: O(log N)
observation
Number of Rotations

=

Index of Minimum Element
initialize
low = 0
high = n-1
while(low < high)
find mid
compare
nums[mid]

with

nums[high]
if
nums[mid] < nums[high]
minimum lies on left
mid can also be the minimum
high = mid
else
nums[mid] > nums[high]
minimum lies on right
mid cannot be the minimum
low = mid + 1
repeat until
low == high
return
low

because

low

=

Index of Minimum

=

Number of Rotations

TC = O(log N)

SC = O(1)

Memory Trigger
Find Minimum

↓

Return Index

↓

Index of Minimum

=

Number of Rotations*/