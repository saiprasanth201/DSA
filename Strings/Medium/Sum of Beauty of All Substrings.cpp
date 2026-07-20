class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum = 0;
        for(int i =0;i<n;i++){
            vector<int>freq(26,0);
            for(int j = i;j<n;j++){
                int maxi= INT_MIN;
                int mini = INT_MAX;
                freq[s[j]-'a']++;

                for(int k=0;k<26;k++){
                    if(freq[k]!=0){
                        maxi = max(maxi,freq[k]);
                        mini = min(mini,freq[k]);
                    }
                }
                sum += maxi-mini;
            }
        }
        return sum;
    }
};