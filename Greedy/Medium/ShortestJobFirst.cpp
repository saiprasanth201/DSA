class Solution {
  public:
    long long solve(vector<int>& jobs) {
        sort(jobs.begin(), jobs.end());

        long long waitTime = 0;  
        long long totalTime = 0;  
        int n = jobs.size(); 

        for (int i = 0; i < n; i++) {
            waitTime += totalTime;  
            totalTime += jobs[i];   
        }
        return waitTime / n;
    }
};
    