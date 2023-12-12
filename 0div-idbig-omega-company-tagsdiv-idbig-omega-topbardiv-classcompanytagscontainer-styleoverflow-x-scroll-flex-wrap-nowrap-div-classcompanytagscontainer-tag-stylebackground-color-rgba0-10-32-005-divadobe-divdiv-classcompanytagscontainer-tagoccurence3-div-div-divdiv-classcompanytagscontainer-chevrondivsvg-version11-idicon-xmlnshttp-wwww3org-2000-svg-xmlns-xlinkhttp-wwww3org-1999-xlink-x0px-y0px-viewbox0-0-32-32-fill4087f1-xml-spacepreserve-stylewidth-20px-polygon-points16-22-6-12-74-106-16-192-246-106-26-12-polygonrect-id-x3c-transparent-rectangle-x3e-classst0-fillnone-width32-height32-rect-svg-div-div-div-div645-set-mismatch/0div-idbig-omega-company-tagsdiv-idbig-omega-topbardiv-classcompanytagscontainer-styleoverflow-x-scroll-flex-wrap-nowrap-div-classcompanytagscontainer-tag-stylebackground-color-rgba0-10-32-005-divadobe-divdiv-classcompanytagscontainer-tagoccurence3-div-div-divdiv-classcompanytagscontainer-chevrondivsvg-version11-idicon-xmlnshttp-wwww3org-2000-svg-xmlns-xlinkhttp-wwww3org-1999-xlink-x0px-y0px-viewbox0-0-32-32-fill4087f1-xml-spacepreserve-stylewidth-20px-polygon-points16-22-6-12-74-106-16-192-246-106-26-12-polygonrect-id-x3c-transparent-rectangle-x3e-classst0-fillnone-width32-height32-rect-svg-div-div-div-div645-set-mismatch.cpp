class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum=0;
        int duplicate=0,missing=0;
        int n=nums.size();
        for(auto it:nums)sum+=it;
        for(int i=0;i<n;i++){
            int x = nums[i];
            if(nums[abs(x)-1]<0){
                duplicate=abs(x);
            }
            else nums[abs(x)-1]=nums[abs(x)-1]*-1;
        }
        int sum1=n*(n+1)/2;
        if(sum1>sum)return {duplicate, duplicate+abs(sum-sum1)};
        return {duplicate, duplicate-abs(sum-sum1)};
    }
};