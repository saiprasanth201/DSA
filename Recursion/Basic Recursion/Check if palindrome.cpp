// Check if a string is palindrome or not using recursion.
//M1: Single index approach
bool palindrome(int i, string& s){
    if(i>=s.size()/2)return true;
    if(s[i]!= s[s.size()-i-1])return false;
    return palindrome(i+1,s);
}

//M2: Two pointer approach
bool palindrome(int left,int right,string& s){
    if(left>=right)return true;
    if(s[left]!= s[right])return false;
    return palindrome(left+1,right-1,s);
}