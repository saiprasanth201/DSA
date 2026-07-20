class Solution {
public:
    int maxDepth(string s) {
        // Your code goes here
        int count =0;
        int maxi = 0;
        int n = s.size();
        for(int i =0;i<n;i++){
            if(s[i]=='('){
                count++;
                maxi=max(maxi,count);
            }else if(s[i]==')'){
                count--;
            }
        }
        return maxi;
    }
};
