class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto it:arr)m[it]++;
        int ans = -1;
        for(auto it:arr){
            if(m[it]>=(arr.size()/4)){
                if(m[ans]<m[it])ans=it;
            }
        }
        return ans;
    }
};