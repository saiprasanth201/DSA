class Solution {
public:
    int numJewelsInStones(string j, string s) {
        unordered_set<char>jewels;
        for(auto c:j) jewels.insert(c);
        int cnt = 0;
        for(auto c:s) 
        if(jewels.find(c) != jewels.end()) cnt++;
        return cnt;
    }
};