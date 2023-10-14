class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        for(auto it: nums){
            if(it==1)ones++;
            else if(it==2)twos++;
            else zeros++;
        }
        for(int i=0;i<nums.size();i++){
            if(zeros!=0){
                nums[i]=0;
                zeros--;
            }
            else if(zeros==0 && ones!=0){
                nums[i]=1;
                ones--;
            }
            else if(zeros==0 && ones==0 && twos!=0){
                nums[i]=2;
                twos--;
            }
        }
        
    }
};