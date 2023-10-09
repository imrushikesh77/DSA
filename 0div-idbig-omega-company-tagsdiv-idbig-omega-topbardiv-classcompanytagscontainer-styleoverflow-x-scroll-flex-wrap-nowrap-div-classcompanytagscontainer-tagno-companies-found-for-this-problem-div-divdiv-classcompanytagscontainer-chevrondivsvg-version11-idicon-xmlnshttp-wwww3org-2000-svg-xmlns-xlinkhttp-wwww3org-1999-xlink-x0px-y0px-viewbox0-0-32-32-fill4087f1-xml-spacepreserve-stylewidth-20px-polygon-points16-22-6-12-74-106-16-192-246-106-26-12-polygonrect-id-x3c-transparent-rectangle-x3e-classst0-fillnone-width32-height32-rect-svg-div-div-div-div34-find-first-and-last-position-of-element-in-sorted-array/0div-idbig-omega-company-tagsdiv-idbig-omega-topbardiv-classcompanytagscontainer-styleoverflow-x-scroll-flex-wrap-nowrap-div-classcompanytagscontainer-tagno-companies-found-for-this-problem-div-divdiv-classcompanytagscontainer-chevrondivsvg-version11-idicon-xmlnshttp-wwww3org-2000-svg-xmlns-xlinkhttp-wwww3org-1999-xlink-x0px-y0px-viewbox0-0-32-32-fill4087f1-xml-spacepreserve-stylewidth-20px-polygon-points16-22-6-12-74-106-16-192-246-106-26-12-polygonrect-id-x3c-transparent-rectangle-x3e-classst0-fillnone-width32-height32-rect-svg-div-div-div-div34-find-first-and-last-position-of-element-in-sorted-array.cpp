class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)return {-1,-1};
        int i=0;
        int j=nums.size()-1;
        if(target>nums[j])return {-1,-1};
        while(i<=j){
            if(target>nums[i]){i++;}
            if(target<nums[j]){j--;}
            if(nums[i]==target && nums[j]==target)return{i,j};
        }
        return {-1,-1};
    }
};