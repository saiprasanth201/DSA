class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0; i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return ;
    }
};

/*Problem #39: Rotate Matrix by 90 Degrees

Brute Force: O(N²)

- create another matrix ans[n][n]

- place elements in rotated positions

- copy ans back if needed

TC = O(N²)

SC = O(N²)

Memory Trigger:
Column becomes row in reverse order

--------------------------------------------------

Optimal: O(N²)

- transpose matrix

- swap(matrix[i][j],matrix[j][i])

- traverse only upper triangle

- for(i=0 to n-1)

- for(j=i+1 to n-1)

- reverse every row

- reverse(matrix[i].begin(),matrix[i].end())

TC = O(N²)

SC = O(1)

Memory Trigger:
90° Clockwise

Transpose
→ Reverse Every Row*/