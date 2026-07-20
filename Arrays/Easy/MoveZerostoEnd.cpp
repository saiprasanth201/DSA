//tab1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j =0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};

/*Problem #7: Move Zeroes

Brute Force: O(2N)

- create temporary array

- store all non-zero elements
  in temp

- copy temp elements back
  to original array

- fill remaining positions
  with zeroes

TC = O(2N)

SC = O(N)

--------------------------------

Optimal: O(N)

- use two pointers

- j points to position where
  next non-zero element
  should be placed

- i scans the array

- if nums[i] != 0

  swap(nums[i], nums[j])

  j++

- all non-zero elements move
  to front while maintaining
  relative order

- remaining positions
  automatically become zeroes

TC = O(N)

SC = O(1)

Memory Trigger:

j = next non-zero position

i = scanner

Non-zero found?

↓

swap(i,j)

↓

j++*/