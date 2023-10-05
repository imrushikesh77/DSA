class Solution {
public:
    bool helper(int i, int j, string &s){
        if(i>j)return true;
        if(s[i]!=s[j])return false;
        return helper(i+1,j-1,s);
    }
    bool isPalindrome(string s) {
        string temp = "";
        for(auto it:s){
            if((it>='a' && it<='z') || (it>='A' && it<='Z')){
                temp+=tolower(it);
            }
            else if(isdigit(it))temp+=it;
        }
        cout<<temp;
        return helper(0,temp.length()-1,temp);
    }
};