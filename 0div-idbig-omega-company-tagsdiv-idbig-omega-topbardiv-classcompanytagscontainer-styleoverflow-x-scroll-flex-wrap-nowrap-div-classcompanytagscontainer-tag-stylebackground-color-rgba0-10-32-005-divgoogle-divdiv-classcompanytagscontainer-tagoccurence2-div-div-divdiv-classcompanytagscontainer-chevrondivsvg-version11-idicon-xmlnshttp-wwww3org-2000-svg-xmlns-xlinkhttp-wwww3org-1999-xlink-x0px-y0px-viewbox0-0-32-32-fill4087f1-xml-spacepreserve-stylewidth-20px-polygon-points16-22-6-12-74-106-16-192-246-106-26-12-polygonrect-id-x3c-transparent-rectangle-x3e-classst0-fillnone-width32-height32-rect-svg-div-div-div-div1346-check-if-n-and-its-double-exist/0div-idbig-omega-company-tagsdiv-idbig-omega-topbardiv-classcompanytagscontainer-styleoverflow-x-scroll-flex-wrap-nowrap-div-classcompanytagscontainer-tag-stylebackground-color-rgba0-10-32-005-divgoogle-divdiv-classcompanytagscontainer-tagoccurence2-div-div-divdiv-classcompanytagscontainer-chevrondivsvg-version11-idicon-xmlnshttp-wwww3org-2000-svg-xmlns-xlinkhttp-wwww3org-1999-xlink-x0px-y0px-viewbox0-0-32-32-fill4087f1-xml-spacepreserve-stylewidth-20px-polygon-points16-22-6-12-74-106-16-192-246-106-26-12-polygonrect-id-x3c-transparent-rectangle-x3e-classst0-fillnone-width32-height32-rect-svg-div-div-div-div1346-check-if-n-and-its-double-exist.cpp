class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int>m;
        for(auto it:arr)m[it]++;
        for(auto it:arr){
            if(it==0 && m[it]>1)return true;
            else if(it!=0 && m[it*2]>0)return true;
        }
        return false;
    }
};