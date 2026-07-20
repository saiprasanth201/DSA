class Solution {
public:
bool canEat(vector<int>piles,int h,int speed){
    long long hrs = 0;
    for(auto pile:piles){
        hrs += ceil((double)pile/speed);
    }
    return hrs<=h;
}
int minimumRateToEatBananas(vector<int> piles, int h) {
 int low = 1;
 int high = *max_element(piles.begin(),piles.end());
 while(low<=high){
    int mid = low + (high-low)/2;

    if(canEat(piles,h,mid)){
        high = mid - 1;
    }else{
        low = mid + 1;
    }
 }
  return low;
    }
};


/*Problem #113: Koko Eating Bananas

Optimal: O(N log M)
search on answer space
initialize
low = 1
high = maximum pile
create helper function
canEat(speed)
calculate total hours required
hours += ceil((double)pile/speed);
if
hours <= h
speed works
search for smaller speed
high = mid - 1;
else
speed too slow
increase speed
low = mid + 1;
when loop ends
return
low

because

low

=

Minimum Possible Speed
TC
O(N log M)

N = number of piles

M = maximum pile
SC
O(1)
Memory Trigger
Answer Space

↓

1 .... maxPile

↓

Guess Speed

↓

Calculate Hours

↓

hours <= h ?

↓

YES

Search Left

↓

NO

Search Right

↓

Return low*/