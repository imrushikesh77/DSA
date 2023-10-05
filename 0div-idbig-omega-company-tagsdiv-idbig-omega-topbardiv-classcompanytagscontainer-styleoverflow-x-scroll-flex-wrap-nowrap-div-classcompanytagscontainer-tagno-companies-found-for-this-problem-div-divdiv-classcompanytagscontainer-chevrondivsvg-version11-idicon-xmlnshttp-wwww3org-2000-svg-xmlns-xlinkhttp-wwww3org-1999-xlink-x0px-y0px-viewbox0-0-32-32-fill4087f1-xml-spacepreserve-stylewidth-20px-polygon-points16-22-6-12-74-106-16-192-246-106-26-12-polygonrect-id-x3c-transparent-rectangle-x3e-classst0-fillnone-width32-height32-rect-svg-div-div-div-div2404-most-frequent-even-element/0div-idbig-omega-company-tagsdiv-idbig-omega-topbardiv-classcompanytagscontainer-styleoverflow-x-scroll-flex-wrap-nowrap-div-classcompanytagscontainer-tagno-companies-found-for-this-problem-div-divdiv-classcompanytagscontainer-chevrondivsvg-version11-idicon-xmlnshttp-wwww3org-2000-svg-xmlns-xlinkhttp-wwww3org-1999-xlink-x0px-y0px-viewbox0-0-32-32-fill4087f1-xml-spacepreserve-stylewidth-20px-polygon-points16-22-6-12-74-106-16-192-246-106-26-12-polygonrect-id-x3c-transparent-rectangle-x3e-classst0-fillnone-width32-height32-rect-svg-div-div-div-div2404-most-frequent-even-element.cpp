class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        for(auto it:nums)m[it]++;
        int ans = -1;
        int elt = -1;
        for(auto it:m){
            if(it.first%2==0 && it.second>ans){
                ans=it.second;
                elt=it.first;
            }
        }
        return elt;
    }
};