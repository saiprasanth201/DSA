class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int>st;
        vector<int>ans;
        int a,b,expectedsum=0,actualsum=0;

        for(int i = 0;i<n;i++){
           for(int j = 0;j<n;j++){
            actualsum+=grid[i][j];
            if(st.find(grid[i][j])!=st.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            st.insert(grid[i][j]);
           }   
        }
        expectedsum = (n*n) * ((n*n)+1)/2 ;
        b = expectedsum - actualsum + a ;
        ans.push_back(b);

        return ans;
    }
};

/*Problem #42: Find Missing and Repeated Values

Better: O(N²)

- use unordered_set

- traverse the matrix

- maintain:

  actualsum

- if element already exists
  in set

  repeated = current element

- otherwise insert
  into set

- calculate expected sum
  from 1 to n²

  expectedsum =
  (n²)(n²+1)/2

- actualsum contains

  expectedsum
  - missing
  + repeated

- therefore

  missing =
  expectedsum
  - actualsum
  + repeated

- return

  [repeated, missing]

TC = O(N²)

SC = O(N²)

Memory Trigger:

HashSet
↓

Find Repeated

↓

Expected Sum Formula

↓

Find Missing*/