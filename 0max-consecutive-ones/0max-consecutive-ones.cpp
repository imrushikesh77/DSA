class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLength = 0;
        int currLength = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currLength++;
                maxLength = max(currLength, maxLength);
            }
            else{
                currLength = 0;
            }
        }
        return maxLength;
    }
};