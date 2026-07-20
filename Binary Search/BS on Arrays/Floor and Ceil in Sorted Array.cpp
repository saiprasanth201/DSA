class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
   int findFloor(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) {
                ans = arr[mid];     
                low = mid + 1;      
            } else {
                high = mid - 1;     
            }
        }
        return ans;
    }

    
    int findCeil(int arr[], int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) {
                ans = arr[mid];     
                high = mid - 1;     
            } else {
                low = mid + 1;     
            }
        }
        return ans;
    }

    }
};

/*Problem #102 : Floor & Ceil

Floor

Largest element <= x

--------------------------------

If arr[mid] <= x

↓

Store Value

↓

Search Right

low = mid + 1

--------------------------------

Else

Search Left

high = mid - 1

--------------------------------

Ceil

Smallest element >= x

--------------------------------

If arr[mid] >= x

↓

Store Value

↓

Search Left

high = mid - 1

--------------------------------

Else

Search Right

low = mid + 1

--------------------------------

Time Complexity

O(log N)

Space Complexity

O(1)

--------------------------------

Memory Trigger

Floor

↓

Largest Valid

↓

Go Right

------------------------------

Ceil

↓

Smallest Valid

↓

Go Left*/