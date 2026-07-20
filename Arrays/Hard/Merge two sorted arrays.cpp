class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = m+n-1, i = m-1,j= n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[index--] = nums1[i--];
            }else{
                nums1[index--] = nums2[j--];
            }
        }
        while(j>=0){
            nums1[index--] = nums2[j--];
        }
    }
};

/*Problem #88 : Merge Sorted Array

Idea

Start from the End

↓

Take

Largest Element

↓

Place at Last Empty Position

↓

Move Corresponding Pointer

↓

Continue Until

One Array Finishes

↓

Copy Remaining
Elements of nums2

TC = O(m+n)

SC = O(1)

Memory Trigger

End

↓

Compare Largest

↓

Fill Backwards*/