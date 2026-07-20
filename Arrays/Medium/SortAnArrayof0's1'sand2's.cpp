class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};

//tab2
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int cnt0 = 0,cnt1=0,cnt2=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0){
                cnt0++;
            }
            else if(nums[i] == 1){
                cnt1++;
            }
            else if(nums[i] == 2){
                cnt2++;
            }
        }
        int idx =0;

        for(int i =0; i<cnt0;i++){
            nums[idx] = 0;
            idx++;
        }
        for(int i =0; i<cnt1;i++){
            nums[idx] = 1;
            idx++;
        }
        for(int i =0; i<cnt2;i++){
            nums[idx] = 2;
            idx++;
        }
    }
};

//tab3
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n=nums.size();
        int low = 0,mid=0,high = n-1;
        while(mid <= high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high --;
            }
        }
    }
};

//tab4
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n = nums.size();
        int low =0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                    low++;
                    mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high --;
            }
        }
    }
};

/*DUTCH NATIONAL FLAG ALGORITHM
0 to low-1      → 0s
low to mid-1    → 1s
mid to high     → unknown
high+1 to end   → 2s


low  -> boundary of 0s
mid  -> current element under inspection
high -> boundary of 2s

Process until unknown region disappears:
while(mid <= high)*/