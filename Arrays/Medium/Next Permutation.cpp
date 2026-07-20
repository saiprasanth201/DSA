class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Your code goes here
        next_permutation(nums.begin(),nums.end());
        return;
    }
};

//tab2
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index=-1;

        for(int i = n-2;i>=0;i++){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
            if(index == -1){
                reverse(nums.begin(),nums.end());
                return;
            }
        }
        for(int i = n-1; i>index;i--){
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;
                }
            }
        reverse(nums.begin()+index+1,nums.end());    
    }
};

//tab3
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int index = -1;

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index = i;
            }
            if(index == -1){
                reverse(nums.begin(),nums.end());
                return;
            }
        }
        for(int i = n-1;i<=0;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
    reverse(nums.begin()+index+1,nums.end());

    }
};

/*Problem #35: Next Permutation

Brute force: O(NlogN)

-use next_permutation(num.begin(),nums.end()).

Optimal: O(N)

- find breakpoint from right
- breakpoint is first element where
  nums[i] < nums[i+1]

- if no breakpoint exists
  reverse whole array

- find first element greater than
  nums[index] from right side

- swap both elements

- reverse suffix from
  index+1 to end

TC = O(N)
SC = O(1)

Memory Trigger:
Find dip
→ swap with next greater element
→ reverse suffix

No dip?
→ reverse whole array*/