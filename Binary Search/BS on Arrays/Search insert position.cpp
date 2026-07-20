class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
       int n = nums.size();
       for(int i = 0;i<n;i++){
        if(target <= nums[i]){
            return i;
        }
       }
       return nums.size();
    }
};

//tab2
class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
       for(int i = 0; i<nums.size();i++){
        if(nums[i]>=target){
            return i;
        }
       }
       return nums.size();
    }
};

/*run for loop and 
if(target <= nums[i]){
return i;
} 
}return nums.size();
};*/