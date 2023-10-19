class Solution {
public:
    int findPeak(vector<int>& nums){
        if(nums.size()==1)return 0;
        if(nums.size()==2)return (nums[0]<nums[1])?1:0;
        int start = 0;
        int end = nums.size()-1;
        int mid;
        while(start<=end){
            while(start<nums.size()-1 && nums[start]==nums[start+1])start++;
            while(end>0 && nums[end]==nums[end-1])end--;
            mid = start + (end-start)/2;
            if(mid<nums.size()-1 && nums[mid]>nums[mid+1])return mid;
            if(nums[mid]>=nums[start])start=mid+1;
            else end=mid;
        }
        return mid;
    }
    bool binarySearch(vector<int>& nums, int target, int start, int end){
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]<target)start=mid+1;
            else if(nums[mid]>target)end=mid-1;
            else return 1;
        }
        return 0;
    }
    bool search(vector<int>& nums, int target) {
        int peak = findPeak(nums);
        cout<<peak;
        if(nums[peak]==target)return 1;
        else if(target<nums[0])return binarySearch(nums,target,peak+1,nums.size()-1);
        return binarySearch(nums,target,0,peak);
    }
};