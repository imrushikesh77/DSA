class Solution {
public:
    int search(vector<int>&nums, int target, bool isStartIndex){
        int ans = -1;
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid = i +(j-i)/2;
            if(nums[mid]<target){
                i=mid+1;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                ans = mid;
                if(isStartIndex)j=mid-1;
                else i=mid+1;
            }
        }
        return ans;
                                                                
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = search(nums,target,true);
        int j = search(nums,target,false);
        return {i,j};
    }
};