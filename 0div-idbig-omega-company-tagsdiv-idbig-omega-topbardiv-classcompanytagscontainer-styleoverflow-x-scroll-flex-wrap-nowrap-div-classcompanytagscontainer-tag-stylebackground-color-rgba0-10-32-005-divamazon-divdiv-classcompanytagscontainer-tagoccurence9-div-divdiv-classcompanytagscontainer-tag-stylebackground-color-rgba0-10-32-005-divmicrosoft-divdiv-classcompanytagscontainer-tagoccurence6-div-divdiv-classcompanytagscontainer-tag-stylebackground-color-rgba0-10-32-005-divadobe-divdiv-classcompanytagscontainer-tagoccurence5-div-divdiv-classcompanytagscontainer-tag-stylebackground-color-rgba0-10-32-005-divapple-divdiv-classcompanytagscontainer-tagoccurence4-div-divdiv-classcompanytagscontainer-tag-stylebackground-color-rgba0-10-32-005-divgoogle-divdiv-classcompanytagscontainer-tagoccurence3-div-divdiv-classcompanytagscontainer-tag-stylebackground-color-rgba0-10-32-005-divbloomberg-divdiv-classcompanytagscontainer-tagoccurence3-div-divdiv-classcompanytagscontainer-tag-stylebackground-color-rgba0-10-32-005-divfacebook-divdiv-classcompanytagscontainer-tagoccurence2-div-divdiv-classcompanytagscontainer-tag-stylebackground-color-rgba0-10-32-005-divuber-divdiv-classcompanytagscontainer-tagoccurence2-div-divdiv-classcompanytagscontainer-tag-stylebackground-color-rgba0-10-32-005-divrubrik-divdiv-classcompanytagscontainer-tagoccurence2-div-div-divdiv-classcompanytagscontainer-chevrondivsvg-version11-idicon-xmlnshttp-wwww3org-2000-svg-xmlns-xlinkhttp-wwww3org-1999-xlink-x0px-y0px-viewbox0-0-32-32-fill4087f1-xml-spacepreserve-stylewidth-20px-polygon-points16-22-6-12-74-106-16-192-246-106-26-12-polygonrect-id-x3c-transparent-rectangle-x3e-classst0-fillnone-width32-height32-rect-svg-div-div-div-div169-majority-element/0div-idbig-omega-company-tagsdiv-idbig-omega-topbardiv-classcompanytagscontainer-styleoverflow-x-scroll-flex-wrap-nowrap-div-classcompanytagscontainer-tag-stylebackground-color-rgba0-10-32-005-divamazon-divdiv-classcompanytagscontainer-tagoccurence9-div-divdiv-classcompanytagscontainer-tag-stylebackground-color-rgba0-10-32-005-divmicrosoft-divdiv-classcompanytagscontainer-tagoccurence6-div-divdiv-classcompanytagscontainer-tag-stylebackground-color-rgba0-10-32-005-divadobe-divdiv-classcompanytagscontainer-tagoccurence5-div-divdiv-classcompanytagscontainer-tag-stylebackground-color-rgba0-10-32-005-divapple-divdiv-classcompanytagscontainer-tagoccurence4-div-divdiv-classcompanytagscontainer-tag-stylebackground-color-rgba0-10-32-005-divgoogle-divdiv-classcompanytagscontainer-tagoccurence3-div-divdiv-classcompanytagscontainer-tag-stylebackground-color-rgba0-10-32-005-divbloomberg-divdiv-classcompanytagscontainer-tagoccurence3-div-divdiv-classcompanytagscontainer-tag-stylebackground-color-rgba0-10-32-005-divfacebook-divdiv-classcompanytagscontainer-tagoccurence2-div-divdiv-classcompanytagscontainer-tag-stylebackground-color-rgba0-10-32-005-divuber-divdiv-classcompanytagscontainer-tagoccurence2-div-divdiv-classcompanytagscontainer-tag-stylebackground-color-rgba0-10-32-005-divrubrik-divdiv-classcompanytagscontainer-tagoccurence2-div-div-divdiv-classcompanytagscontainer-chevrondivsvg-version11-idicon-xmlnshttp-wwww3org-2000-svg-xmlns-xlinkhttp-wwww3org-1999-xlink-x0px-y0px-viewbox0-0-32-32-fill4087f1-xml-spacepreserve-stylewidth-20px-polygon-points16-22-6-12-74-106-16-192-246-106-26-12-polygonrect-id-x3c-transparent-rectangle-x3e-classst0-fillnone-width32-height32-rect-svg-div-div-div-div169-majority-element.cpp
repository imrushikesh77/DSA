class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elt = 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                elt = nums[i];
            }
            if(nums[i]==elt)cnt++;
            else if(nums[i]!=elt)cnt--;
        }
        return elt;
    }
};