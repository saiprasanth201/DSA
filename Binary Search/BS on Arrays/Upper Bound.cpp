class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int n = nums.size();
        int low = 0,high= n-1,ans = n;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>x){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};

/*Problem #100 : Upper Bound

Definition

First index where

arr[i] > x

--------------------------------

If nums[mid] > x

↓

Current answer found

↓

ans = mid

↓

Search Left

high = mid - 1

--------------------------------

If nums[mid] <= x

↓

Discard Left Half

↓

low = mid + 1

--------------------------------

Initialize

ans = n

--------------------------------

Loop

while(low <= high)

--------------------------------

Return

ans

--------------------------------

Time Complexity

O(log N)

--------------------------------

Space Complexity

O(1)

--------------------------------

Memory Trigger

Valid

↓

Store

↓

Go Left

Invalid

↓

Go Right*/