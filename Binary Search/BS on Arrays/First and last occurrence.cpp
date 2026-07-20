class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int n= nums.size();
        int first = -1, last =-1;
        for(int i = 0;i<n;i++){
            if(nums[i]==target){
                if(first == -1) first = i;
                last = i;
            }
        }
        return {first,last};
    }
};

//tab2
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int n = nums.size();
        int start = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int end = upper_bound(nums.begin(),nums.end(),target)- nums.begin()-1;
        if(start<n && nums[start] == target) return {start,end};
        return {-1,-1};
    }
};

/*Find First & Last Occurrence

↓

First

=

Lower Bound

----------------------------

Last

=

Upper Bound - 1

----------------------------

Target Exists?

↓

nums[start] == target

----------------------------

No

↓

{-1,-1}

Yes

↓

{start,end}*/