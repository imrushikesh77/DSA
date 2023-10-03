class Solution {
public:
    int combination(int n){
        int num = n*(n-1);
        int ans = num/2;
        return ans;
    }
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        for(auto it:nums)m[it]++;
        int ans = 0;
        for(auto it:m){
            ans+=combination(it.second);
        }
        return ans;
    }
};