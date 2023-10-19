class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st,tt;
        for(auto it:s){
            if(it=='#'&& !st.empty())st.pop();
            else if(it!='#') st.push(it);
        }
        for(auto it:t){
            if(it=='#' && !tt.empty())tt.pop();
            else if(it!='#') tt.push(it);
        }
        if(st.empty()&&tt.empty())return true;
        string temp1 = "";
        string temp2 = "";
        while(!st.empty()){
            char c = st.top();
            temp1+=c;
            st.pop();
        }
        while(!tt.empty()){
            char c = tt.top();
            temp2+=c;
            tt.pop();
        }
        cout<<temp1<<" "<<temp2<<endl;
        return (temp1==temp2)?true:false; 
        
    }
};