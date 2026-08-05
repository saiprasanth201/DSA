class Solution{
public:
    bool isValid(string str){
        stack<char>st;
        for(auto i:str){
            if(i == '(' || i == '[' || i == '{') st.push(i);
            else{
                if(st.empty()) return false;
                if((st.top() == '(' && i == ')') ||
                   (st.top() == '{' && i == '}') ||
                   (st.top() == '[' && i == ']')) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};