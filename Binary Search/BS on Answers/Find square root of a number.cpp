class Solution {
public:
    int floorSqrt(int n)  {
      int low = 1, high = n;
      while(low<=high){
      long long mid = low+(high-low)/2;
      if((mid*mid)<=n) low = mid+1;
      else{high = mid-1;}
      }
      return high;
    }
};

//tab2
class Solution {
public:
    int floorSqrt(int n)  {
      int low =1,high =n;
      while(low<=high){
        long long mid = low +(high-low)/2;
        if((mid*mid)==n)return mid;
        else if((mid*mid) <= n) low = mid+1;
        else{high = mid-1;}
      }
      return high;
    }
};

/*Problem #110: Square Root of a Number (Floor)
Optimal: O(log N)
initialize
low = 1
high = n
while(low <= high)
find mid
if
mid * mid <= n
mid is a possible answer
search for a larger answer
low = mid + 1;
else
mid * mid > n
mid cannot be the answer
search left
high = mid - 1;
when loop ends
return
high

because

high

=

Largest value whose square ≤ n

TC = O(log N)

SC = O(1)

Memory Trigger
Guess Answer

↓

mid * mid

↓

≤ n

↓

Possible Answer

↓

Go Right

--------------------

> n

↓

Too Large

↓

Go Left

--------------------

Return High*/