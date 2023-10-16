class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>s;
        for(auto it:arr){
            if(s.count(it*2)>0 || (it%2==0 && s.count(it/2)>0))return true;
            s.insert(it);
        }
        return false;
    }
};