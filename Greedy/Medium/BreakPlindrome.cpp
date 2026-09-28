class Solution{
public:
    string breakPalindrome(string palin){
        int n = palin.size();
        if(n<=1) return "";
        for(int i=0;i<n/2;i++){
            if(palin[i] != 'a'){
                palin[i] = 'a';
                return palin;
            }
        }
        palin[n-1] = 'b';
        return palin;
    }
};