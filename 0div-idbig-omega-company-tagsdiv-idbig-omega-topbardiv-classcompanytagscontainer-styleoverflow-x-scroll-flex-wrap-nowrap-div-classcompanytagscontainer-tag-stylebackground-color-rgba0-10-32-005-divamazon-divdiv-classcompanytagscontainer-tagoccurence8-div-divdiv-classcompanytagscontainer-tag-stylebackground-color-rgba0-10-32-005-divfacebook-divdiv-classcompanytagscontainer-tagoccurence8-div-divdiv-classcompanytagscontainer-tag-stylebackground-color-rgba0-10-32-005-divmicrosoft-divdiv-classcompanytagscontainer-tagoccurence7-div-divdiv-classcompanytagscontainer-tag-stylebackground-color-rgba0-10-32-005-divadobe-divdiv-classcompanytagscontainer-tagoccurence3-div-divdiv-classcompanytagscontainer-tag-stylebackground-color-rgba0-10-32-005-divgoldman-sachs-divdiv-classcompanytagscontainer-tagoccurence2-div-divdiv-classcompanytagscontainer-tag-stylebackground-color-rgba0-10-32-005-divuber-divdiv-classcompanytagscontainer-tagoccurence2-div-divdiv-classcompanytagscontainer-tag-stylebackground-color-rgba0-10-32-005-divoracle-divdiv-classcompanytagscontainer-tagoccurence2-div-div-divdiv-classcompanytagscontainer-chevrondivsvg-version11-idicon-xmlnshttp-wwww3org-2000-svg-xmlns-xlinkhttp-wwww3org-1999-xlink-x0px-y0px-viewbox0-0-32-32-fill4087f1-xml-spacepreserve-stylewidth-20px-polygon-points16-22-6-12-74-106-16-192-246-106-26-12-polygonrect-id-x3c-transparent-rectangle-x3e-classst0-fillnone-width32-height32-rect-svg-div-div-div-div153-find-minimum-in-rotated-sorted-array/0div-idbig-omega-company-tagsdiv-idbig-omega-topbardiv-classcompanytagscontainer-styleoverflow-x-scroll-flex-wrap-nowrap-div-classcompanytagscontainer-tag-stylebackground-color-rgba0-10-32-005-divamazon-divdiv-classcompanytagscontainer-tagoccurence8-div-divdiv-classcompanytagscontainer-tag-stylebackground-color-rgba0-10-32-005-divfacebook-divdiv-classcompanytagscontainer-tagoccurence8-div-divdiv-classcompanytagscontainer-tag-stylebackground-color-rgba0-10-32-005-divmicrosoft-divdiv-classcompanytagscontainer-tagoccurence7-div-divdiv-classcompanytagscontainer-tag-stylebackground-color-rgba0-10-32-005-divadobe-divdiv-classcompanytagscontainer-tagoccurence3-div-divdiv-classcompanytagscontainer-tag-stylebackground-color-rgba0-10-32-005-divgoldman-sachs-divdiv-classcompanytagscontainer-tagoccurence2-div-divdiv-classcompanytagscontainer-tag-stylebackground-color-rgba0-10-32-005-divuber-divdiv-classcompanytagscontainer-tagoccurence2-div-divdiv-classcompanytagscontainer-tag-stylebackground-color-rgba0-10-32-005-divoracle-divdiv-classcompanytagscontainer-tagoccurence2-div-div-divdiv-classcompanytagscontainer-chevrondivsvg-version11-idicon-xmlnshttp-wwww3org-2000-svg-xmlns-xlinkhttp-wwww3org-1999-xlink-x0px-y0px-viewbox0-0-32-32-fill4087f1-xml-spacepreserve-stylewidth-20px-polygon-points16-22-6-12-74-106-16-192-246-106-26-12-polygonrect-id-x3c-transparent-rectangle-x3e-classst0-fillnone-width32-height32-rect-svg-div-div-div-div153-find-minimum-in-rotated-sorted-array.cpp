class Solution {
public:
    int findPeak(vector<int>& nums){
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(mid<end && nums[mid]>nums[mid+1])return mid;
            if(mid>start && nums[mid]<nums[mid-1])return mid-1;
            if(nums[mid]<=nums[start])end=mid-1;
            else{
                start=mid+1;
            }
        }
        return -1;
    }
    int findMin(vector<int>& nums) {
        int peak = findPeak(nums);
        if(peak==-1)return nums[0];
        return nums[peak+1];
    }
};