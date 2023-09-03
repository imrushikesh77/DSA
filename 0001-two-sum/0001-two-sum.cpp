class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copyNums;
        copyNums = nums;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int xi=-1, yj=-1;
        while(j>i){
            if(nums[i]+nums[j]==target){
                xi=nums[i];
                yj=nums[j];
                break;
            }
            if(nums[i]+nums[j]>target){
                j--;
            }
            if(nums[i]+nums[j]<target){
                i++;
            }
        }
        cout<<xi<<" "<<yj<<endl;
        for(auto it:copyNums){
            cout<<it<<" ";
        }
        bool flag = false;
        for(int i=0;i<copyNums.size();i++){
            if(xi==copyNums[i] && flag==false){
                xi=i;
                flag = true;
            }
            else if(yj==copyNums[i]) yj=i;
        }
        return {xi, yj};
    }
};