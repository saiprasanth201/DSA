class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int left = 0;
        int bottom = m - 1;
        int right = n - 1;

        vector<int> ans;

        while (top <= bottom && left <= right) {
            // top row
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);

            top++;

            // right column
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);

            right--;

            // bottom row
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);

                bottom--;
            }

            // left column
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);

                left++;
            }
        }
        return ans;
    }
};

/*Problem #40: Spiral Matrix

Optimal: O(m*n)

- take 4 boundaries

- top = 0
- left = 0

- bottom = m-1
- right = n-1

- create ans vector

- while(top <= bottom && left <= right)

1. traverse top row
   left → right

2. top++

3. traverse right column
   top → bottom

4. right--

5. if(top <= bottom)

   traverse bottom row
   right → left

   bottom--

6. if(left <= right)

   traverse left column
   bottom → top

   left++

- repeat until boundaries cross

- return ans

TC = O(m*n)

SC = O(1)
(ignoring output vector)

Memory Trigger:

top row
↓

right column
↓

bottom row
↓

left column

shrink boundaries

repeat*/