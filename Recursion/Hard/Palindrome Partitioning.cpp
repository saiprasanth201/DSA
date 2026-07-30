class Solution{
    public:
    bool isPalin(string s){
        string s2 = s;
        reverse(s2.begin(),s2.end());
        return s == s2;
    }
    void pal(string s,vector<string>&temp,vector<vector<string>>&ans){
        if(s.size() == 0){
            ans.push_back(temp);
            return;
        }
        for(int i = 0;i<s.size();i++){
            string part = s.substr(0,i+1);
            if(isPalin(part)){
                temp.push_back(part);
                pal(s.substr(i+1),temp,ans);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>>partition(string s){
        vector<vector<string>> ans;
        vector<string>temp;
        pal(s,temp,ans);
        return ans;
    }
};