class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
    auto low = lower_bound(arr.begin(), arr.end(), target);
    auto high = upper_bound(arr.begin(), arr.end(), target);
    return high - low;
    }
};

/*Find Upper_bound.
Find Lower_bound.

return high - low !*/