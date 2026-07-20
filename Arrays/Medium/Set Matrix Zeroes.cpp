class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>row(m,0);
        vector<int>col(n,0);

        for(int i = 0; i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(row[i]||col[j]){
                    matrix[i][j]=0;
                }
            }
        }
        return;
    }
};

/*Problem #38: Set Matrix Zeroes

Problem:

* Given a matrix.
* If an element is 0, make its entire row and column 0.
* Return the modified matrix.

---

Brute Force: O((m*n)*(m+n))

* traverse the matrix
* whenever matrix[i][j] == 0
* mark entire row with -1
* mark entire column with -1
* do not change original 0
* after traversal convert all -1 to 0
* return matrix

TC = O((m*n)*(m+n))
SC = O(1)

Memory Trigger:
Do not make cells 0 immediately.
Mark them with -1 first.
Convert all -1 to 0 at the end.

---

Better: O(m*n)

* create row[m] and col[n]

* initialize with 0

* traverse matrix

* if matrix[i][j] == 0
  row[i] = 1
  col[j] = 1

* traverse matrix again

* if row[i] || col[j]
  matrix[i][j] = 0

* return matrix

TC = O(m*n)
SC = O(m+n)

Memory Trigger:
row[] stores rows containing zero.

col[] stores columns containing zero.

Mark first.
Zero later.

---

Optimal: O(m*n)

* use first column as row markers
* use first row as column markers
* take col0 = 1

First Traversal:

* if matrix[i][j] == 0

* mark row:
  matrix[i][0] = 0

* if j == 0
  col0 = 0

* else
  matrix[0][j] = 0

Second Traversal:

* start from (1,1)

* if matrix[i][0] == 0
  OR
  matrix[0][j] == 0

* make matrix[i][j] = 0

Handle First Row:

* if matrix[0][0] == 0
  make entire first row 0

Handle First Column:

* if col0 == 0
  make entire first column 0

TC = O(m*n)
SC = O(1)

Memory Trigger:
row[]  → matrix[i][0]

col[]  → matrix[0][j]

Use first row and first column
as marker arrays.

---

Important Matrix Notes

# matrix[i][j]

matrix[row][column]

m = number of rows

n = number of columns

# matrix.size()

number of rows

# matrix[0].size()

number of columns

Memory Trigger:
m,n = size of matrix

i,j = position inside matrix*/