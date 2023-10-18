class Solution {
public:
    int bs(vector<int>& nums, int start, int end, int target){
        if(start>end)return -1;
        cout<<"Hello\n";
        int mid = start + (end-start)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]>target)end=mid-1;
        else start=mid+1;
        return bs(nums,start,end,target); 
    }
    int search(vector<int>& nums, int target) {
        return bs(nums,0,nums.size()-1,target);
    }
};