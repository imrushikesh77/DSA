class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long x = 0;
        for(int i=0;i<nums.size();i++){
            x ^= nums[i];
        }
        x &= -x;
        vector<int> ans = {0,0};
        
        for(auto it:nums){
            if(it&x)ans[0]^=it;
            else ans[1]^=it;
        }
        return ans;
    }
};