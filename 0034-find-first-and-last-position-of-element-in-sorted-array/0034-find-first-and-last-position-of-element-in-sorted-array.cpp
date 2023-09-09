class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int i=0;
        int j=nums.size()-1;
        if(nums[j]<target) return{-1, -1};
        while(i<=j){
            if(nums[i]<target) i++;
            if(nums[j]>target)j--;
            if(nums[i]==target && nums[j]==target) return {i,j};
        }
        return {-1, -1};
    }
};