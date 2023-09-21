class Solution {
public:

    void helper(int n, vector<int>&nums, set<vector<int>> &ans){
        if(n==nums.size()){
            ans.insert(nums);
            return;
        }
        for(int i=n;i<nums.size();i++){
            if(i!=n && nums[i]==nums[i-1])continue;
            swap(nums[n],nums[i]);
            helper(n+1,nums,ans);
            swap(nums[n],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(0,nums,ans);
        vector<vector<int>> result;
        for(auto it:ans){
            result.push_back(it);
        }
        return result;
    }
};