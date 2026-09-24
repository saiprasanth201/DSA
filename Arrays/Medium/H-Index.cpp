//M1 : asc ord
class Solution {
    public:
        int hIndex(vector<int>& cit) {
            sort(cit.begin(),cit.end());
            int n = cit.size(),i;
            for(i=1;i<=n;i++)if(cit[n-i] < i) break;
            return i-1;
        }
    };

//M2 : dsc ord
class Solution {
    public:
        int hIndex(vector<int>& cit) {
            sort(cit.rbegin(),cit.rend());
            int n = cit.size(),i;
            for(i=1;i<=n;i++)if(cit[i-1] < i) break;
            return i-1;
        }
    };