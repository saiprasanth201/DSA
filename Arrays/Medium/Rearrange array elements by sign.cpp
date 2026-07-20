class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int posIndex=0,negIndex=1;

        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
       return ans; 
    }
};

/*Optimal: O(N)

- take two pointers posindex = 0 and negindex = 1
- take vector<int> ans(n) to store answer
- run a for loop
- if nums[i] < 0
    ans[negindex] = nums[i]
    negindex += 2
- else
    ans[posindex] = nums[i]
    posindex += 2
- return ans

Memory Trigger:
Positive numbers go to even indices.
Negative numbers go to odd indices.*/