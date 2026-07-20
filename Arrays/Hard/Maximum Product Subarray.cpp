class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int prod = 1;
        int n = nums.size();
        for(int i =0;i<n;i++){
            prod *= nums[i];
            maxi=max(maxi,prod);

            if(prod ==0){
                prod = 1;
            }
        }
        prod = 1;
        for(int i = n-1;i>=0;i--){
            prod *= nums[i];
            maxi= max(maxi,prod);

            if(prod == 0){
                prod = 1;
            }
        }
        return maxi;
    }
};

/*Problem #71: Maximum Product Subarray

Optimal: O(N) (kadanes algo inspired) -->  if prod is 0! then (set prod =1).

- maintain

  prod = 1

  maxi = INT_MIN

- traverse

  Left → Right

- multiply current
  element with prod

- update

  maxi =
  max(maxi, prod)

- if product
  becomes 0

  reset

  prod = 1

- reset

  prod = 1

- traverse

  Right → Left

- repeat same
  process

- update maximum
  product again

- maximum product
  may come from

  Left

  OR

  Right

- therefore

  scan from
  both directions

- finally return

  maxi

TC = O(N)

SC = O(1)

Memory Trigger:

Left Product

↓

Update Maximum

↓

Reset at 0

↓

Right Product

↓

Update Maximum

↓

Return Answer*/