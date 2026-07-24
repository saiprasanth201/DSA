class Solution{
public:
    void generate(string & temp,int idx,int n,vector<string>&ans){
        if(idx >= n){
            ans.push_back(temp);
            return;
        }
        temp.push_back('0');
        generate(temp,idx+1,n,ans);
        temp.pop_back();

        if(temp.empty() || temp.back() == '0'){
            temp.push_back('1');
            generate(temp,idx+1,n,ans);
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