class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int cnt = 0;
            for(int j = 0;j<n;j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt>n/2){
            return nums[i];
            }
        }
        return -1;
    }
};

//tab2
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};

//tab3
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate; int count = 0;

        for(int i = 0;i<n;i++){
            if(count == 0){
                candidate = nums[i];
            }
            if(nums[i] == candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};

/*Method 1:
class solution{
public:
void Majority(vector<int>&nums){
for loop i
int cnt =0;
for loop j=i
if(nums[i] == nums[j]) cnt++;

if(cnt>n/2) return nums[i];
return -1;

method 2:
sort(nums.begin(), nums.end());
return nums[n/2];

(Moore Voting)
Optimal: O(N)
- initialize candidate and count = 0
- run for loop
- if count == 0
    candidate = nums[i]
- if nums[i] == candidate
    count++
- else
    count--
- return candidate

Memory Trigger:
Different elements cancel each other.
When count becomes 0,
choose a new candidate.*/