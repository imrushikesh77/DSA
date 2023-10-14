class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(auto it:nums){
            m[it]++;
        }
        int ans = 0;
        for(auto it:m){
            if(it.second>(nums.size()/2))ans=it.first;
        }
        return ans;
    }
};