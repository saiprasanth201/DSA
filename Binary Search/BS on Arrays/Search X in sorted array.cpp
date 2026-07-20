class Solution{
public:
    int search(vector<int> &nums, int target){
     int n = nums.size();   
     int low=0,mid=0,high=n-1;

     while(low<=high){
        mid = (low+high)/2;
        if(target==nums[mid]){
            return mid;
        }
        else if(target > nums[mid]){
            low = mid+1;
        }
        else if(target < nums[mid]){
            high = mid-1;
        }
     }
     return -1;
    }
};

/*low=0,mid=0,high=n-1;
while(low<=high)
mid = (low+high)/2
tar == mid then return mid
tar > mid then make low = mid+1
tar < mid then make high = mid -1
if target not found return -1*/