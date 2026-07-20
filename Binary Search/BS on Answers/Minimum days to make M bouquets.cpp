class Solution {
public:
bool possible(vector<int>&nums, int k, int m,int days){
    int flower = 0; int boq = 0;
    for(auto num:nums){
        if(num <= days) flower++;
        else{
            boq += flower/k;
            flower = 0;
        }
    }
    boq += flower/k;
    return boq >= m;
}
int roseGarden(int n,vector<int>&nums, int k, int m) {
    if((long long)m*k > nums.size()) return -1;
    int low = *min_element(nums.begin(),nums.end());
    int high = *max_element(nums.begin(),nums.end());
    while(low<=high){
        int mid = low + (high-low)/2;
        if(possible(nums,k,m,mid)) high = mid-1;
        else{low = mid+1;}
    }
   return low;
  }
};

/*Problem #116: Minimum Number of Days to Make m Bouquets
Optimal: O(N log M)
impossible case
if((long long)m * k > bloomDay.size())
    return -1;
search on answer space
low = minimum bloom day

high = maximum bloom day
create helper function
possible(day)
maintain
flowers = consecutive bloomed flowers

bouquets = total bouquets formed
if
bloomDay[i] <= day
flowers++;
else
bouquets += flowers / k;

flowers = 0;
after loop
bouquets += flowers / k;

(process the last streak)

if
bouquets >= m

day works

high = mid - 1;
else
low = mid + 1;
return
low;
TC
O(N log M)

N = number of flowers

M = maximum bloom day
SC
O(1)
Memory Trigger
Guess Day

↓

Which flowers have bloomed?

↓

Count consecutive flowers

↓

flowers / k

↓

Enough bouquets?

↓

YES

Search LEFT

↓

NO

Search RIGHT*/