class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity){
        int day = 1;
        int load = 0;
       for(auto weight:weights){
         if(load+weight<=capacity){
            load+= weight;
         }else{
            day++;
            load = weight;
         }
       }
    return day <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        long long high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            long long mid = low + (high-low)/2;
            if(canShip(weights,days,mid))high = mid-1;
            else{low = mid+1;}
        }
        return low;
    }
};

/*Problem #115: Capacity To Ship Packages Within D Days

Optimal: O(N log S)
search on answer space
initialize
low = maximum package weight
high = sum of all package weights
create helper function
canShip(capacity)
simulate loading packages
day = 1;
load = 0;
if
load + weight <= capacity
load package
load += weight;
else
ship is full
start new day
day++;

load = weight;
if
day <= days
capacity works
search smaller capacity
high = mid - 1;
else
capacity too small
low = mid + 1;
return
low

because

low

=

Minimum Valid Capacity
TC
O(N log S)

N = number of packages

S = sum of all package weights
SC
O(1)
Memory Trigger
Answer Space

↓

max(weight) .... sum(weights)

↓

Guess Capacity

↓

Simulate Loading

↓

Days <= Given Days ?

↓

YES

Search LEFT

↓

NO

Search RIGHT

↓

Return low*/