class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        string ans = "";
        for(char num : s){
            if(num == '('){
                count++;
                if(count>1){
                   ans+=num;
                }
            }
            if(num == ')'){
                count--;
                if(count>0){
                    ans+=num;
                }
            }
        }
        return ans;
    }
};

//tab2 
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        string ans = "";
        for(int i =0;i<s.size();i++){
            if(s[i]==')')count--;
            if(count!=0)ans.push_back(s[i]);
            if(s[i]=='(')count++;
        }
        return ans;
    }
};
