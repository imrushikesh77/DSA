class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(mid<nums.size()-1 && nums[mid]==nums[mid+1]){
                if(mid%2==0){
                    start=mid+1;
                }
                else{
                   end=mid-1; 
                }
            }
            else if(mid>0 && nums[mid]==nums[mid-1]){
                if(mid%2==0){
                    end=mid-1;
                }
                else{
                   start=mid+1; 
                }
            }
            else return nums[mid];
        }
        return nums[start];
    }
};