class Solution{
public:
    void generate(string & temp,int open,int close,int n,vector<string>&ans){
        if(open < n){
            ans.push_back(temp);
            return;
        }
        temp.push_back('()');
        generate(temp,open+1,close,n,ans);
        temp.pop_back();

        if(open > close){
            temp.push_back(')');
            generate(temp,open+1,close,n,ans);
            temp.pop_back();
        }
    }
    vector<string>GenerateBinaryStrings(int n){
        vector<string>ans;
        string temp;
        generate(temp,0,n,ans);
        return ans;
    }
};