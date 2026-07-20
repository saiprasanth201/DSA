class Solution {
public:
    bool possible(vector<int>&nums,int threshold,int divisor){
        long long sum =0;
        for(auto num:nums){
            sum += ceil((double)num/divisor);
        }
        return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
        int mid = low + (high-low)/2;
        if(possible(nums,threshold,mid)){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
        return low;
    }
};

/*Problem #114: Smallest Divisor Given a Threshold

Optimal: O(N log M)
Answer space:
low = 1

high = maximum element
Guess divisor using binary search.
Create check function:
possible(divisor)
Calculate:
sum += ceil(nums[i]/divisor)
If
sum <= threshold

divisor works.

Search smaller divisor.

high = mid - 1;
Else

divisor is too small.

Need a larger divisor.

low = mid + 1;
TC
O(N log M)

where

N = array size

M = maximum element
SC
O(1)
Memory Trigger
Find Minimum Answer

↓

low = smallest possible

high = largest possible

↓

Guess mid

↓

Check(mid)

↓

Works?

↓

Store

Search LEFT

↓

Fails?

↓

Search RIGHT*/