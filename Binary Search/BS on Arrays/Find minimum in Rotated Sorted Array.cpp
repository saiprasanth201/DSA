class Solution {
public:
    int findMin(vector<int> &arr)  {
      sort(arr.begin(),arr.end());
      return arr[0];
    }
};

//tab2 
class Solution {
public:
    int findMin(vector<int> &arr)  {
      int n = arr.size();
      int left=0,mid=0,right=n-1;
      while(left<right){
        mid = (left+right)/2;
        if(arr[mid]<arr[right]){
            right = mid;
        }else if(arr[mid]>arr[right]){
            left = mid+1;
        }
      }
      return arr[right];
    }
};

//tab3
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int low = 0, high = n-1;
        while(low<high){
            int mid = low + (high-low)/2;
            if(nums[mid]<nums[high]) high = mid;
            else{low = mid+1;}
        }
        return nums[high]; // or return nums[low];
    }
};

/*Problem #77: Find Minimum in Rotated Sorted Array

Optimal: O(log N)

- use Binary Search

- initialize

  left = 0

  right = n-1

- while

  left < right

- find mid

- compare

  nums[mid]

  with

  nums[right]

- if

  nums[mid] > nums[right]

  right half is
  not sorted

  minimum lies
  after mid

  left = mid+1

- else

  right half is
  sorted

  minimum is
  mid or left

  right = mid

- when

  left == right

  minimum found

- return

  nums[left]

TC = O(log N)

SC = O(1)

Memory Trigger:

Compare

Mid

↓

Right

↓

mid > right

↓

Go Right

↓

mid < right

↓

Go Left
(Including Mid)

↓

left == right

↓

Answer*/