class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int left[nums.size()];
        left[0]=nums[0];
        int right[nums.size()];
        right[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            left[i] = min(nums[i],left[i-1]);
        }
        for(int i=nums.size()-2;i>=0;i--){
            right[i] = min(right[i+1],nums[i]);
        }
        
        int minSum = INT_MAX;
        for (int j = 1; j < n - 1; ++j) {
        if (nums[j] > left[j] && nums[j] > right[j]) {
            minSum = min(minSum, left[j] + nums[j] + right[j]);
        }
    }
        return (minSum == INT_MAX) ? -1 : minSum;
    }
};